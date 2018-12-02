/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 15:10:43 by nnaumenk          #+#    #+#             */
/*   Updated: 2018/07/25 15:10:44 by nnaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_fdf.h"

char	*ft_join_free(char *s1, char *s2, int l1, int l2)
{
	char	*a;
	int		l;

	l = l1 + l2;
	a = ft_strnew(l);
	while (l2--)
		a[--l] = s2[l2];
	while (l1--)
		a[--l] = s1[l1];
	free(s1);
	s1 = NULL;
	return (a);
}

long	ft_index(char *str, long size, char elem)
{
	long i;

	i = -1;
	while (++i < size)
		if (str[i] == elem)
			return (i);
	return (-1);
}

int		ft_gnl_2(char **str, long *len, long index, char **line)
{
	char	*new;
	long	new_len;
	long	i;

	if (index == -1)
		index = *len;
	*line = ft_strnew(index);
	i = -1;
	while (++i < index)
		(*line)[i] = (*str)[i];
	new_len = *len - index - 1;
	if (new_len >= 0)
		new = ft_strnew(new_len);
	else
	{
		new_len = 0;
		new = NULL;
	}
	i = -1;
	while (++index < *len)
		new[++i] = (*str)[index];
	free(*str);
	(*str) = new;
	*len = new_len;
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static	char	*str;
	static long		len;
	char			buf[BUFF_SIZE];
	long			buf_len;
	int				index;

	if (fd < 0 || BUFF_SIZE <= 0 || !line || read(fd, 0, 0) == -1)
		return (-1);
	if (str == NULL)
		str = ft_strnew(0);
	else if ((index = ft_index(str, len, '\n')) != -1)
		return (ft_gnl_2(&str, &len, index, line));
	while ((buf_len = read(fd, buf, BUFF_SIZE)))
	{
		index = ft_index(buf, buf_len, '\n');
		str = ft_join_free(str, buf, len, buf_len);
		len += buf_len;
		if (index != -1)
			break ;
	}
	if (len == 0 && buf_len == 0)
		return (0);
	index = len - buf_len + index;
	return (ft_gnl_2(&str, &len, index, line));
}
