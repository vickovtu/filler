/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vickovtu <vickovtu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 15:01:04 by vickovtu          #+#    #+#             */
/*   Updated: 2018/04/05 13:58:41 by vickovtu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t n)
{
	unsigned char	*str;
	unsigned char	*str1;
	size_t			i;

	str = (unsigned char *)destination;
	str1 = (unsigned char *)source;
	i = 0;
	if (n == 0)
		return (str);
	if (str > str1)
	{
		i = n;
		while (--i != 0)
			str[i] = str1[i];
		str[i] = str1[i];
	}
	else
		while (i < n)
		{
			str[i] = str1[i];
			i++;
		}
	return (str);
}
