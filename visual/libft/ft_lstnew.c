/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vickovtu <vickovtu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 13:15:35 by vickovtu          #+#    #+#             */
/*   Updated: 2018/04/05 13:11:07 by vickovtu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_t_list;

	new_t_list = (t_list *)malloc(sizeof(t_list));
	if (new_t_list == NULL)
		return (NULL);
	if (content != NULL)
	{
		new_t_list->content = ft_strdup(content);
		if (new_t_list->content == NULL)
			free(new_t_list->content);
		new_t_list->content_size = content_size;
		new_t_list->next = NULL;
	}
	else
	{
		new_t_list->content = NULL;
		new_t_list->content_size = 0;
		new_t_list->next = NULL;
	}
	return (new_t_list);
}
