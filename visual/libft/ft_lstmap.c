/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vickovtu <vickovtu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 16:15:23 by vickovtu          #+#    #+#             */
/*   Updated: 2018/04/05 15:15:15 by vickovtu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new_t_list;
	t_list *header_list;

	if (!lst || !(*f))
		return (NULL);
	header_list = ft_lstnew(lst->content, lst->content_size);
	if (header_list == NULL)
		return (NULL);
	header_list = f(lst);
	if (header_list == NULL)
	{
		free(header_list);
		return (NULL);
	}
	new_t_list = header_list;
	while (lst->next)
	{
		new_t_list->next = f(lst->next);
		new_t_list = new_t_list->next;
		lst = lst->next;
	}
	return (header_list);
}
