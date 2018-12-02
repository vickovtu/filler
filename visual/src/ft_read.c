/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vickovtu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 03:33:21 by vickovtu          #+#    #+#             */
/*   Updated: 2018/08/14 03:33:33 by vickovtu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_fdf.h"

void	ft_read(t_param *filler)
{
	char	*line1;
	int		i;

	while ((get_next_line(0, &line1)) == 1)
	{
		if (ft_strstr(line1, "Plateau "))
			ft_map(line1, filler);
		else if (ft_strstr(line1, "vickovtu.filler"))
		{
			i = -1;
			while (line1[++i])
				if (line1[i] == 'p' && (line1[i + 1] == '1' ||
					line1[i + 1] == '2'))
				{
					filler->p_me = (line1[++i] == '1') ? 'O' : 'X';
					filler->p_other = (filler->p_me == 'X') ? 'O' : 'X';
				}
		}
		free(line1);
	}
}

void	ft_map1(char *line1, t_param *filler)
{
	int i;

	i = 8;
	filler->plateau_x = ft_atoi(&line1[i]);
	while (line1[i] != ' ')
		i++;
	filler->plateau_y = ft_atoi(&line1[i]);
	filler->buf = (char **)malloc(sizeof(char *) * (filler->plateau_x + 2));
	filler->buf[filler->plateau_x] = NULL;
}

void	ft_map(char *line1, t_param *filler)
{
	int		i;
	int		count;
	char	*line;

	i = 0;
	count = 0;
	if (!filler->buf)
		ft_map1(line1, filler);
	else
		while (i < filler->plateau_x)
			free(filler->buf[i++] - 4);
	i = 0;
	if (get_next_line(0, &line) > 0)
		free(line);
	while (i < filler->plateau_x && get_next_line(0, &line) > 0)
		filler->buf[i++] = line + 4;
	ft_draw_line1(filler);
}
