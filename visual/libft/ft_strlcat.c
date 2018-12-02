/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vickovtu <vickovtu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 20:37:55 by vickovtu          #+#    #+#             */
/*   Updated: 2018/04/01 22:20:56 by vickovtu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	j;
	size_t	i;

	a = 0;
	while (dst[a] && a < size)
		a++;
	j = 0;
	i = a;
	if (size - a == 0)
		return (a + ft_strlen(src));
	while (src[j])
	{
		if ((size - (a + 1)) != 0)
			dst[a++] = src[j];
		j++;
	}
	dst[a] = '\0';
	return (i + j);
}
