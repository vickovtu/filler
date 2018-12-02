/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vickovtu <vickovtu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 18:06:12 by vickovtu          #+#    #+#             */
/*   Updated: 2018/04/01 17:06:10 by vickovtu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlenn(char const *s)
{
	int i;

	i = 0;
	if (s)
		while (s[i])
			i++;
	return (i);
}

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;

	str = NULL;
	if (s && *s && f)
	{
		i = ft_strlenn(s);
		if ((str = (char*)malloc(sizeof(char) * (i + 1))) == NULL)
			return (NULL);
		str[i] = '\0';
		i = 0;
		while (s[i])
		{
			str[i] = (*f)(s[i]);
			i++;
		}
	}
	return (str);
}
