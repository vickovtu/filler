/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vickovtu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 14:33:32 by vickovtu          #+#    #+#             */
/*   Updated: 2018/04/02 14:59:20 by vickovtu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t			i;
	size_t			a;
	size_t			b;
	char			*str;
	char			*str1;

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
			while (str[a++] == str1[b++])
				if (str1[b] == '\0')
					return (&str[i]);
		i++;
	}
	return (NULL);
}
