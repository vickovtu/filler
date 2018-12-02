/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_tabl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vickovtu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 03:30:51 by vickovtu          #+#    #+#             */
/*   Updated: 2018/08/14 03:31:06 by vickovtu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_fdf.h"

void	ft_draw_gor(t_param *param)
{
	param->i = -1;
	while (++param->i < param->plateau_x + 1)
	{
		param->x = 0;
		while (++param->x < param->plateau_y + 1)
		{
			param->x1 = param->shift + param->x * param->mashtab;
			param->x2 = param->shift + (param->x + 1) * param->mashtab;
			param->y1 = 100 + param->i * param->mashtab;
			param->y2 = 100 + param->i * param->mashtab;
			param->color = WHITE;
			ft_bresenham(param);
		}
	}
}

void	ft_print_ver(t_param *param)
{
	param->i = -1;
	while (++param->i < param->plateau_x)
	{
		param->x = 0;
		while (++param->x <= param->plateau_y + 1)
		{
			param->y1 = 100 + param->i * param->mashtab;
			param->y2 = 100 + (param->i + 1) * param->mashtab;
			param->x1 = param->shift + param->x * param->mashtab;
			param->x2 = param->shift + param->x * param->mashtab;
			param->color = WHITE;
			ft_bresenham(param);
		}
	}
}

void	ft_print_kvad(t_param *param, int a, int b, char c)
{
	param->i = 0;
	while (++param->i < param->mashtab - 1)
	{
		param->x = 0;
		while (++param->x <= param->mashtab - 1)
		{
			param->y1 = 100 + param->i + (param->mashtab * a);
			param->y2 = 100 + (param->i + 1) + (param->mashtab * a);
			param->x1 = param->shift + param->mashtab + param->x +
			(param->mashtab * b);
			param->x2 = param->shift + param->mashtab + param->x +
			(param->mashtab * b);
			if (c == 'O')
				param->color = RED;
			else if (c == 'X')
				param->color = CYAN;
			else if (c == 'o')
				param->color = YELLOW;
			else if (c == 'x')
				param->color = LIME;
			ft_bresenham(param);
		}
	}
}

void	ft_coord(t_param *param)
{
	int y;
	int x;

	y = -1;
	while (param->buf[++y])
	{
		x = -1;
		while (param->buf[y][++x])
			if (param->buf[y][x] == 'O' || param->buf[y][x] == 'X' ||
				param->buf[y][x] == 'o' || param->buf[y][x] == 'x')
				ft_print_kvad(param, y, x, param->buf[y][x]);
	}
}

void	ft_draw_line1(t_param *param)
{
	param->mashtab = (800 / param->plateau_x);
	param->shift = (1600 - (param->mashtab * param->plateau_y)) / 2;
	mlx_clear_window(param->mlx_ptr, param->win_ptr);
	ft_draw_str(param);
	ft_draw_gor(param);
	ft_print_ver(param);
	ft_coord(param);
	mlx_hook(param->win_ptr, 2, 5, deal_key, param);
	mlx_hook(param->win_ptr, 17, 1L << 17, exit_x, param);
	mlx_loop(param->mlx_ptr);
}
