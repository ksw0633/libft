/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 20:20:30 by sunkim            #+#    #+#             */
/*   Updated: 2020/03/08 21:44:11 by sunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*temp;
	t_list	*return_value;
	t_list	*current;

	if (!lst || !f)
		return (NULL);
	temp = f(lst);
	if (!(current = ft_lstnew(temp->content, temp->content_size)))
		return (current);
	return_value = current;
	lst = lst->next;
	while (lst)
	{
		temp = f(lst);
		if (!(current->next = ft_lstnew(temp->content, temp->content_size)))
			return (NULL);
		lst = lst->next;
		current = current->next;
	}
	return (return_value);
}
