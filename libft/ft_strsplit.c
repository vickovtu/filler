/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vickovtu <vickovtu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 19:23:59 by vickovtu          #+#    #+#             */
/*   Updated: 2018/04/02 19:20:57 by vickovtu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_kol_bykv(char const *s, char c, int index)
{
	int i;

	i = 0;
	if (s && c && s[index] != '\0')
	{
		if (s[index] == c)
			while (s[index] == c && s[index] != '\0')
				index++;
		while (s[index] != c && s[index] != '\0')
		{
			index++;
			i++;
		}
	}
	return (i);
}

static void	ft_make_massiv(char **str, char const *s, char c, int slova)
{
	int a;
	int massiv;
	int index;
	int index2;

	massiv = 0;
	index = 0;
	while (massiv < slova)
	{
		index2 = 0;
		a = ft_kol_bykv(s, c, index);
		if ((str[massiv] = (char*)malloc(sizeof(char) * (a + 1))) != NULL)
		{
			str[massiv][a] = '\0';
			while ((index2 < a) && s[index])
			{
				if (s[index] == c)
					while (s[index] == c && s[index] != '\0')
						index++;
				str[massiv][index2++] = s[index++];
			}
			massiv++;
		}
	}
}

char		**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		i;

	i = 0;
	if (!s || !c)
		return (NULL);
	i = ft_kol_slov(s, c);
	if ((str = (char**)malloc(sizeof(char*) * (i + 1))) == NULL)
		return (NULL);
	ft_make_massiv(str, s, c, i);
	str[i] = NULL;
	return (str);
}
