/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vickovtu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 01:51:58 by vickovtu          #+#    #+#             */
/*   Updated: 2018/07/10 01:54:11 by vickovtu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_fdf.h"

int		exit_x(t_param *par)
{
	if (par != NULL)
		par = NULL;
	exit(1);
	return (0);
}

int		deal_key(int key, t_param *param)
{
	if (param == NULL)
		param = NULL;
	if (key == 53)
		exit(1);
	if (key == 36)
		ft_read(param);
	return (0);
}

int		main(void)
{
	t_param filler;

	ft_bzero(&filler, sizeof(filler));
	filler.mlx_ptr = mlx_init();
	filler.win_ptr = mlx_new_window(filler.mlx_ptr, 1600, 1200, "FILLER");
	ft_read(&filler);
	return (0);
}
