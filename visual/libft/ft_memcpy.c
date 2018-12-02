/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vickovtu <vickovtu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 21:01:43 by vickovtu          #+#    #+#             */
/*   Updated: 2018/04/05 17:39:33 by vickovtu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char			*str;
	unsigned char			*str1;
	size_t					i;

	str = (unsigned char *)dest;
	str1 = (unsigned char *)src;
	if (!str && !str1)
		return (NULL);
	i = 0;
	while (i < n)
	{
		str[i] = str1[i];
		i++;
	}
	return ((void *)str);
}
