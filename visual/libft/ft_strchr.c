/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vickovtu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 14:02:27 by vickovtu          #+#    #+#             */
/*   Updated: 2018/04/02 14:20:28 by vickovtu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	i;
	size_t			a;
	char			*str;

	str = (char *)s;
	i = (unsigned char)c;
	a = 0;
	while (str[a])
	{
		if (str[a] == i)
			return (&str[a]);
		a++;
	}
	if (str[a] == i)
		return (&str[a]);
	return (NULL);
}
