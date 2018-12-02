/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vickovtu <vickovtu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 15:01:24 by vickovtu          #+#    #+#             */
/*   Updated: 2018/04/03 14:49:30 by vickovtu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	a;
	size_t	b;
	char	*str;
	char	*str1;

	i = 0;
	str = (char *)haystack;
	str1 = (char *)needle;
	if (str1[i] == '\0')
		return (str);
	while (str[i])
	{
		a = i;
		b = 0;
		if (str[a] == str1[b])
			while (str[a++] == str1[b++] && a <= len)
				if (str1[b] == '\0')
					return (&str[i]);
		i++;
	}
	return (NULL);
}
