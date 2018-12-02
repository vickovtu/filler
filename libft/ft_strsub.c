/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vickovtu <vickovtu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:11:17 by vickovtu          #+#    #+#             */
/*   Updated: 2018/04/01 17:04:39 by vickovtu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_strlenn(char const *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char			*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	str = NULL;
	if (s && *s)
	{
		i = ft_strlenn(s);
		if ((str = (char*)(malloc(sizeof(char) * (len + 1)))) == NULL)
			return (NULL);
		i = 0;
		if (str && s)
		{
			while (i < len && s[start] != '\0')
				str[i++] = s[start++];
			str[i] = '\0';
		}
	}
	return (str);
}
