/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_add_before.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vickovtu <vickovtu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 19:44:54 by vickovtu          #+#    #+#             */
/*   Updated: 2018/04/05 12:29:05 by vickovtu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_add_before(t_list **alst, t_list *p, t_list *new)
{
	t_list	*new_t_list;

	new_t_list = *alst;
	if (*alst == p)
	{
		ft_lstadd(alst, new);
		return ;
	}
	while (new_t_list && new_t_list->next != p)
		new_t_list = new_t_list->next;
	if (new_t_list)
		ft_lst_add_after(new_t_list, new);
}
