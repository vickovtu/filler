/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vickovtu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 15:49:14 by vickovtu          #+#    #+#             */
/*   Updated: 2018/07/17 15:54:15 by vickovtu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include "../libft/libft.h"
# include <string.h>
# include <sys/types.h>
# include <sys/stat.h>

# define BUFF_SIZE 100

typedef struct	s_param
{
	char	p_me;
	char	p_other;
	char	**buf;
	char	**figa;
	int		plateau_x;
	int		plateau_y;
	int		piece_x;
	int		piece_y;

}				t_param;

typedef struct	s_man
{
	int x;
	int y;
	int count;
	int widht;
	int height;
	int l;
}				t_man;

typedef struct	s_alg
{
	int a;
	int b;
	int x;
	int y;
	int i;
}				t_fil;

int				main(void);
void			ft_alg(t_param *filler);
void			ft_map(char *line1, t_param *filler);
void			ft_figa(char *line, t_param *filler);
void			ft_koord(t_man *alg, t_param *filler);
int				ft_abs(int x);
int				ft_manh(t_param *f, int y, int x);
void			ft_check(t_man *alg, t_param *filler);
int				get_next_line(const int fd, char **line);
void			ft_push(int a, int b);

#endif
