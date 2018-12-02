/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vickovtu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 14:21:53 by vickovtu          #+#    #+#             */
/*   Updated: 2018/04/02 14:30:21 by vickovtu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	i;
	size_t			a;
	char			*str;

	str = (char *)s;
	i = (unsigned char)c;
	a = ft_strlen(s);
	if (str[a] == i)
		return (&str[a]);
	while (a)
	{
		if (str[a] == i)
			return (&str[a]);
		a--;
	}
	if (str[a] == i)
		return (&str[a]);
	return (NULL);
}
