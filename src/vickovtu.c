/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vickovtu.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vickovtu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 13:21:10 by vickovtu          #+#    #+#             */
/*   Updated: 2018/07/25 13:21:45 by vickovtu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

void	ft_map(char *line1, t_param *filler)
{
	int		i;
	int		count;
	char	*line;

	i = 0;
	count = 0;
	if (!filler->buf)
	{
		filler->plateau_x = ft_atoi(&line1[i + 8]);
		while (line1[i + 8] != ' ')
			i++;
		filler->plateau_y = ft_atoi(&line1[i + 8]);
		filler->buf = (char **)malloc(sizeof(char *) * (filler->plateau_x + 2));
		filler->buf[filler->plateau_x] = NULL;
	}
	else
		while (filler->buf[i] != NULL)
			free(filler->buf[i++] - 4);
	i = 0;
	if (get_next_line(0, &line) > 0)
		free(line);
	while (i < filler->plateau_x && get_next_line(0, &line) > 0)
		filler->buf[i++] = line + 4;
}

void	ft_figa(char *line, t_param *filler)
{
	int i;

	i = 5;
	filler->piece_x = ft_atoi(&line[i]);
	while (line[i] == ' ')
		i++;
	while (line[i] != ' ')
		i++;
	filler->piece_y = ft_atoi(&line[i]);
	if (filler->figa != NULL)
	{
		i = -1;
		while (filler->figa[++i] != NULL)
			free(filler->figa[i]);
		free(filler->figa);
	}
	filler->figa = (char **)malloc(sizeof(char*) * (filler->piece_x + 1));
	filler->figa[filler->piece_x] = NULL;
	i = -1;
	while (++i < filler->piece_x)
		get_next_line(0, &filler->figa[i]);
	ft_alg(filler);
}

int		ft_abs(int x)
{
	return (x < 0 ? -x : x);
}

void	ft_push(int a, int b)
{
	ft_putnbr_fd(a, 1);
	ft_putstr_fd(" ", 1);
	ft_putnbr_fd(b, 1);
	ft_putstr_fd("\n", 1);
}

int		main(void)
{
	t_param filler;
	char	*line1;
	int		i;

	ft_bzero(&filler, sizeof(filler));
	while ((get_next_line(0, &line1)) == 1)
	{
		if (ft_strstr(line1, "Plateau "))
			ft_map(line1, &filler);
		else if (ft_strstr(line1, "p1") || ft_strstr(line1, "p2"))
		{
			i = -1;
			while (line1[++i])
				if (line1[i] == 'p' && (line1[i + 1] == '1' ||
					line1[i + 1] == '2'))
				{
					filler.p_me = (line1[++i] == '1') ? 'O' : 'X';
					filler.p_other = (filler.p_me == 'X') ? 'O' : 'X';
				}
		}
		else if (ft_strstr(line1, "Piece "))
			ft_figa(line1, &filler);
		free(line1);
	}
	return (0);
}
