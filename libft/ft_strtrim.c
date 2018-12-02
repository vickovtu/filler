/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vickovtu <vickovtu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 18:38:47 by vickovtu          #+#    #+#             */
/*   Updated: 2018/04/02 19:27:38 by vickovtu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlenn(char const *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

static int	ft_minus_probel_end(char const *s, int start, int len)
{
	len--;
	while ((s[len] == ' ' || s[len] == '\n' || s[len] == '\t') && len > start)
		len--;
	return (len);
}

static char	*ft_null(void)
{
	char *str;

	if ((str = (char*)malloc(1)) == NULL)
		return (NULL);
	str[0] = '\0';
	return (str);
}

char		*ft_strtrim(char const *s)
{
	char	*str;
	int		start;
	int		fin;
	int		len;
	int		i;

	if (s)
	{
		len = ft_strlenn(s);
		if (len <= 0)
			return (ft_null());
		start = ft_minus_probel_nachalo(s);
		fin = ft_minus_probel_end(s, start, len);
		i = fin - start;
		if ((str = (char*)malloc(sizeof(char) * (i + 1))) == NULL)
			return (NULL);
		len = 0;
		i = fin - start;
		while (len < i)
			str[len++] = s[++start];
		str[len] = '\0';
		return (str);
	}
	return (NULL);
}
