/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vickovtu <vickovtu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 17:24:28 by vickovtu          #+#    #+#             */
/*   Updated: 2018/04/01 19:21:15 by vickovtu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*str;
	int		a;

	i = ft_strlen(src);
	a = 0;
	if ((str = ft_strnew(i)) == NULL)
		return (NULL);
	while (src[a])
	{
		str[a] = src[a];
		a++;
	}
	return (str);
}
