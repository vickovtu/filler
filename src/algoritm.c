/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoritm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vickovtu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 00:03:45 by vickovtu          #+#    #+#             */
/*   Updated: 2018/08/13 00:04:03 by vickovtu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int		ft_manh(t_param *f, int y, int x)
{
	int len;
	int y1;
	int x1;

	len = f->plateau_x + f->plateau_y;
	y1 = -1;
	while (++y1 < f->plateau_x)
	{
		x1 = -1;
		while (++x1 < f->plateau_y)
			if (f->buf[y1][x1] == f->p_other)
				if (len > ft_abs(y - y1) + ft_abs(x - x1))
					len = ft_abs(y - y1) + ft_abs(x - x1);
	}
	return (len);
}

void	ft_koord1(t_man *a, t_param *f)
{
	int res;
	int x;
	int y;

	y = -1;
	while (++y < f->piece_x)
	{
		x = -1;
		while (++x < f->piece_y)
		{
			if (f->figa[y][x] == '*')
			{
				res = ft_manh(f, y + a->height, x + a->widht);
				if (a->l > res)
				{
					a->l = res;
					a->y = a->height;
					a->x = a->widht;
				}
			}
		}
	}
}

void	ft_koord(t_man *a, t_param *f)
{
	t_fil fill;

	fill.a = 0;
	fill.b = 0;
	fill.y = -1;
	while (++fill.y < f->piece_x)
	{
		fill.x = -1;
		while (++fill.x < f->piece_y)
		{
			if (f->figa[fill.y][fill.x] == '.')
				continue;
			else if ((a->height + fill.y < 0 || a->height + fill.y >=
				f->plateau_x || a->widht + fill.x < 0 ||
				a->widht + fill.x >= f->plateau_y) && (fill.b = 1))
				break ;
			else if (f->buf[a->height + fill.y][a->widht + fill.x] == f->p_me)
				fill.a++;
			else if ((f->buf[a->height + fill.y][a->widht + fill.x] ==
				f->p_other) && (fill.b = 1))
				break ;
		}
	}
	if (fill.a == 1 && fill.b == 0)
		ft_koord1(a, f);
}

void	ft_alg(t_param *filler)
{
	t_man alg;

	alg.l = filler->plateau_x + filler->plateau_y;
	alg.height = -filler->piece_x;
	while (++alg.height < filler->plateau_x)
	{
		alg.widht = -filler->piece_y;
		while (++alg.widht < filler->plateau_y)
			ft_koord(&alg, filler);
	}
	ft_push(alg.y, alg.x);
}
