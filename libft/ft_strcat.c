/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vickovtu <vickovtu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 20:08:25 by vickovtu          #+#    #+#             */
/*   Updated: 2018/04/01 20:29:59 by vickovtu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *str1, const char *str2)
{
	size_t i;
	size_t a;

	i = 0;
	a = 0;
	while (str1[i])
		i++;
	while (str2[a])
	{
		str1[i] = str2[a];
		i++;
		a++;
	}
	str1[i] = '\0';
	return (str1);
}
