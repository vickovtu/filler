/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vickovtu <vickovtu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 19:43:14 by vickovtu          #+#    #+#             */
/*   Updated: 2018/04/05 12:38:30 by vickovtu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	if (!dst[i] && !src[i])
		return (NULL);
	while (src[i] && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	if (i < len)
		while (i < len)
			dst[i++] = '\0';
	return (dst);
}
