/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vickovtu <vickovtu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 14:17:22 by vickovtu          #+#    #+#             */
/*   Updated: 2018/04/05 17:29:28 by vickovtu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *destination, const void *source, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	*str1;
	size_t			i;
	unsigned char	a;

	str = (unsigned char *)destination;
	str1 = (unsigned char *)source;
	if (!str && !str1)
		return (NULL);
	i = 0;
	a = (unsigned char)c;
	while (i < n)
	{
		str[i] = str1[i];
		if (str1[i] == a)
			return (&str[i + 1]);
		i++;
	}
	return (NULL);
}
