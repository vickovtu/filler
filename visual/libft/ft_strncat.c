/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vickovtu <vickovtu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 20:31:16 by vickovtu          #+#    #+#             */
/*   Updated: 2018/04/01 20:35:42 by vickovtu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *str1, char *str2, size_t num)
{
	size_t i;
	size_t a;

	i = 0;
	a = 0;
	while (str1[i])
		i++;
	while (str2[a] && a < num)
	{
		str1[i] = str2[a];
		i++;
		a++;
	}
	str1[i] = '\0';
	return (str1);
}
