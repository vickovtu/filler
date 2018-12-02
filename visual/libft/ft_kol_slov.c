/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_kol_slov.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vickovtu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 19:19:11 by vickovtu          #+#    #+#             */
/*   Updated: 2018/04/02 19:22:13 by vickovtu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_kol_slov(char const *str, char c)
{
	int i;
	int a;

	i = 0;
	a = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
			a++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (a);
}
