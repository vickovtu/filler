/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fdf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vickovtu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 15:49:14 by vickovtu          #+#    #+#             */
/*   Updated: 2018/07/17 15:54:15 by vickovtu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FDF_H
# define FT_FDF_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <mlx.h>
# include "../libft/libft.h"

# define WHITE					0xFFFFFF
# define RED					0xFF0000
# define DEEPPINK				0xFF1493
# define CYAN					0x00FFFF
# define NAVY					0x000080
# define LIME					0x00FF00
# define YELLOW					0xFFFF00

# define WIDTH					720
# define HEIGHT					1200
# define ABS(x)                 (x > 0 ? x : x * -1)
# define MAX(x, y)				(x > y ? x : y)

# define BUFF_SIZE 800000

typedef struct	s_param
{
	void	*mlx_ptr;
	void	*win_ptr;
	char	p_me;
	char	p_other;
	char	**buf;
	char	**figa;
	int		plateau_x;
	int		plateau_y;
	int		piece_x;
	int		piece_y;
	int		x;
	int		dx;
	int		dy;
	int		sx;
	int		sy;
	int		shift_x;
	int		shift_y;
	int		x1;
	int		x2;
	int		y1;
	int		y2;
	int		color;
	int		i;
	int		mashtab;
	int		shift;
}				t_param;

int				get_next_line(const int fd, char **line);
void			ft_bresenham(t_param *param);
void			ft_draw_str(t_param *p);
void			ft_draw_str1(t_param *p);
void			ft_draw_str2(t_param *p, int a, int b);
int				main(void);
void			ft_draw_line1(t_param *param);
void			ft_coord(t_param *param);
void			ft_print_kvad(t_param *param, int a, int b, char c);
void			ft_print_ver(t_param *param);
void			ft_draw_gor(t_param *param);
int				deal_key(int key, t_param *param);
int				exit_x(t_param *par);
void			ft_map(char *line1, t_param *filler);
void			ft_map1(char *line1, t_param *filler);
void			ft_read(t_param *filler);

#endif
