# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vickovtu <vickovtu@student.unit.ua>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/27 19:36:22 by vickovtu          #+#    #+#              #
#    Updated: 2018/04/05 12:27:50 by vickovtu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFILE = ft_swap_int.c ft_my_sqrt.c ft_power.c ft_minus_probel_nachalo.c ft_kol_slov.c ft_tolower.c ft_toupper.c ft_isprint.c ft_isascii.c ft_isalnum.c ft_isdigit.c ft_isalpha.c ft_atoi.c ft_strncmp.c ft_strcmp.c ft_strnstr.c ft_strstr.c ft_strrchr.c ft_strchr.c ft_strlcat.c ft_strncat.c ft_strcat.c ft_strncpy.c ft_strcpy.c ft_strdup.c ft_strlen.c ft_memcmp.c ft_memchr.c ft_memmove.c ft_memccpy.c ft_memcpy.c ft_bzero.c ft_memset.c ft_strmapi.c ft_strmap.c ft_strsplit.c ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_putnbr.c ft_putendl.c ft_putstr.c ft_putchar.c ft_itoa.c ft_strtrim.c ft_strjoin.c ft_strsub.c ft_strnequ.c ft_strequ.c ft_striteri.c ft_striter.c ft_strclr.c ft_strdel.c ft_strnew.c ft_memdel.c ft_memalloc.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_lst_add_after.c ft_lst_add_before.c

OFILE =	ft_swap_int.o ft_my_sqrt.o ft_power.o ft_minus_probel_nachalo.o ft_kol_slov.o ft_tolower.o ft_toupper.o ft_isprint.o ft_isascii.o ft_isalnum.o ft_isdigit.o ft_isalpha.o ft_atoi.o ft_strncmp.o ft_strcmp.o ft_strnstr.o ft_strstr.o ft_strrchr.o ft_strchr.o ft_strlcat.o ft_strncat.o ft_strcat.o ft_strncpy.o ft_strcpy.o ft_strdup.o ft_strlen.o ft_memcmp.o ft_memchr.o  ft_memmove.o ft_memccpy.o ft_memcpy.o ft_bzero.o ft_memset.o ft_strmapi.o ft_strmap.o ft_strsplit.o ft_putnbr_fd.o ft_putendl_fd.o ft_putstr_fd.o ft_putchar_fd.o ft_putnbr.o ft_putendl.o ft_putstr.o ft_putchar.o ft_itoa.o ft_strtrim.o ft_strjoin.o ft_strsub.o ft_strnequ.o ft_strequ.o ft_striteri.o ft_striter.o ft_strclr.o ft_strdel.o ft_strnew.o ft_memdel.o ft_memalloc.o ft_lstnew.o ft_lstdelone.o ft_lstdel.o ft_lstadd.o ft_lstiter.o ft_lstmap.o ft_lst_add_after.o ft_lst_add_before.o

HEADER = libft.h

all: $(NAME)

$(NAME):
		gcc -Wall -Wextra -Werror -I $(HEADER) -c $(CFILE)
		ar rc $(NAME) $(OFILE)
		ranlib $(NAME)

.PHONY: clean fclean re

clean:
		/bin/rm -f $(OFILE)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
