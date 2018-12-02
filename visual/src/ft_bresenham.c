/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bresenham.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vickovtu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 16:43:02 by vickovtu          #+#    #+#             */
/*   Updated: 2018/07/17 16:43:19 by vickovtu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_fdf.h"

void	ft_bresenham_dy(t_param *param)
{
	int const	d2 = (param->dx - param->dy) << 1;
	int const	d1 = param->dx << 1;
	int			d;
	int			i;

	mlx_pixel_put(param->mlx_ptr, param->win_ptr,
		param->x1, param->y1, param->color);
	i = 0;
	d = d1 - param->dy;
	while (++i <= param->dy)
	{
		param->y1 += param->sy;
		if (d > 0)
		{
			d += d2;
			param->x1 += param->sx;
		}
		else
			d += d1;
		mlx_pixel_put(param->mlx_ptr, param->win_ptr,
			param->x1, param->y1, param->color);
	}
}

void	ft_bresenham_dx(t_param *param)
{
	int const	d2 = (param->dy - param->dx) << 1;
	int const	d1 = param->dy << 1;
	int			d;
	int			i;

	mlx_pixel_put(param->mlx_ptr, param->win_ptr,
		param->x1, param->y1, param->color);
	i = 0;
	d = d1 - param->dx;
	while (++i <= param->dx)
	{
		param->x1 += param->sx;
		if (d > 0)
		{
			d += d2;
			param->y1 += param->sy;
		}
		else
			d += d1;
		mlx_pixel_put(param->mlx_ptr, param->win_ptr,
			param->x1, param->y1, param->color);
	}
}

void	ft_bresenham(t_param *param)
{
	param->dx = ABS((param->x2 - param->x1));
	param->dy = ABS((param->y2 - param->y1));
	param->sx = (param->x2 >= param->x1 ? 1 : -1);
	param->sy = (param->y2 >= param->y1 ? 1 : -1);
	if (param->dy <= param->dx)
		ft_bresenham_dx(param);
	else
		ft_bresenham_dy(param);
}
