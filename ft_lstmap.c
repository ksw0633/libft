/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 20:20:30 by sunkim            #+#    #+#             */
/*   Updated: 2020/03/09 23:15:53 by sunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*rv;
	t_list	*current;

	if (!lst || !f)
		return (NULL);
	if(!(rv = f(lst)))
		return (NULL);
	current = rv;
	while (lst->next != NULL)
	{
		f(lst);
		if (!(current->next = ft_lstnew(lst->content, lst->content_size)))
			return (NULL);
		lst = lst->next;
		current = current->next;
	}
	return (rv);
}
