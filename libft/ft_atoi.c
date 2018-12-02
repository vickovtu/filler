/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vickovtu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 16:17:58 by vickovtu          #+#    #+#             */
/*   Updated: 2018/04/02 17:25:50 by vickovtu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	r;
	int	z;

	z = 1;
	r = 0;
	while (*str == ' ' || *str == '\t' || *str == '\v' || *str == '\n' || \
	*str == '\r' || *str == '\f')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			z = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (((unsigned long long int)r * 10) > 9223372036854775807 && z == 1)
			return (-1);
		if ((unsigned long long int)r >= 9223372036854775807 && z == -1)
			return (0);
		r = r * 10 + *str - '0';
		str++;
	}
	r = r * z;
	return (r);
}
