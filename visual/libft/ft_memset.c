/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vickovtu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 21:10:51 by vickovtu          #+#    #+#             */
/*   Updated: 2018/03/30 15:00:33 by vickovtu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	size_t			i;
	unsigned char	a;
	unsigned char	*str;

	str = (unsigned char *)dest;
	a = (unsigned char)c;
	i = 0;
	while (i < count)
	{
		str[i] = a;
		i++;
	}
	return (dest);
}
