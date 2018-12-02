/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vickovtu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 03:20:51 by vickovtu          #+#    #+#             */
/*   Updated: 2018/08/14 03:21:26 by vickovtu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_fdf.h"

void	ft_draw_str3(t_param *p, int a, int b)
{
	char *a1;
	char *b1;

	a1 = ft_itoa(a);
	b1 = ft_itoa(b);
	mlx_string_put(p->mlx_ptr, p->win_ptr, 380, 1050, LIME, a1);
	mlx_string_put(p->mlx_ptr, p->win_ptr, 1330, 1050, LIME, b1);
	if (b > a)
		mlx_string_put(p->mlx_ptr, p->win_ptr,
			800, 1000, LIME, " WINNER : EVIL");
	else if (b < a)
		mlx_string_put(p->mlx_ptr, p->win_ptr,
			800, 1000, LIME, " WINNER : VICKOVTU");
	free(a1);
	free(b1);
}

void	ft_draw_str2(t_param *p, int a, int b)
{
	char *a1;
	char *b1;

	a1 = ft_itoa(a);
	b1 = ft_itoa(b);
	if (a == b)
		mlx_string_put(p->mlx_ptr, p->win_ptr,
			800, 1000, LIME, " WINNER : DEAD HEAT");
	if (p->p_other == 'X')
	{
		mlx_string_put(p->mlx_ptr, p->win_ptr, 380, 1050, LIME, b1);
		mlx_string_put(p->mlx_ptr, p->win_ptr, 1330, 1050, LIME, a1);
		if (a > b)
			mlx_string_put(p->mlx_ptr, p->win_ptr,
				800, 1000, LIME, " WINNER : EVIL");
		else if (b > a)
			mlx_string_put(p->mlx_ptr, p->win_ptr,
				800, 1000, LIME, " WINNER : VICKOVTU");
	}
	else if (p->p_other == 'O')
		ft_draw_str3(p, a, b);
	free(a1);
	free(b1);
}

void	ft_draw_str1(t_param *p)
{
	int x;
	int y;
	int a;
	int b;

	a = 0;
	b = 0;
	y = -1;
	while (++y < p->plateau_x)
	{
		x = -1;
		while (++x < p->plateau_y)
		{
			if (p->buf[y][x] == 'X' || p->buf[y][x] == 'x')
				a++;
			if (p->buf[y][x] == 'O' || p->buf[y][x] == 'o')
				b++;
		}
	}
	ft_draw_str2(p, a, b);
}

void	ft_draw_str(t_param *p)
{
	mlx_string_put(p->mlx_ptr, p->win_ptr,
		800, 50, WHITE, "FILLER by Vickovtu");
	if (p->p_other == 'X')
	{
		mlx_string_put(p->mlx_ptr, p->win_ptr,
			300, 1000, RED, "VICKOVTU : RED");
		mlx_string_put(p->mlx_ptr, p->win_ptr,
			1250, 1000, CYAN, "EVIL : CYAN");
	}
	if (p->p_other == 'O')
	{
		mlx_string_put(p->mlx_ptr, p->win_ptr,
			300, 1000, CYAN, "VICKOVTU : CYAN");
		mlx_string_put(p->mlx_ptr, p->win_ptr, 1250, 1000, RED, "EVIL : RED");
	}
	mlx_string_put(p->mlx_ptr, p->win_ptr, 300, 1050, LIME, "SCORE :");
	mlx_string_put(p->mlx_ptr, p->win_ptr, 1250, 1050, LIME, "SCORE :");
	ft_draw_str1(p);
}
