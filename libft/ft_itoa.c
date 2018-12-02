/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vickovtu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 17:54:33 by vickovtu          #+#    #+#             */
/*   Updated: 2018/03/27 20:04:41 by vickovtu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long long int	ft_abc(long long int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char					*ft_itoa(long long int n)
{
	char			*str;
	int				a;
	long long int	b;

	a = 1;
	b = n;
	if (n < 0 && (b = n) != 0)
		a++;
	while ((b = b / 10) != 0)
		a++;
	if (!(str = (char*)malloc(sizeof(char) * (a + 1))))
		return (NULL);
	str[a] = '\0';
	b = 1;
	if (n < 0 && a-- > 0 && (str[0] = '-') != '0')
		b = 0;
	if (n == 0)
		str[0] = '0';
	while (n && (str[a - b++] = ft_abc(n % 10) + '0') != '\0')
		n = n / 10;
	return (str);
}
