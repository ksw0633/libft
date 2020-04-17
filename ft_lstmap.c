/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 20:20:30 by sunkim            #+#    #+#             */
/*   Updated: 2020/04/17 16:05:38 by sunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*rv;
	t_list	*current;
	void	*temp;

	if (!lst || !f || !del)
		return (NULL);
	if (!(temp = f(lst->content)))
		del(temp);
	rv = (t_list *)malloc(sizeof(t_list));
	current = rv;
	current->content = temp;
	lst = lst->next;
	while (lst != NULL)
	{
		if (!(temp = f(lst->content)))
			del(temp);
		current->next = (t_list *)malloc(sizeof(t_list));
		current = current->next;
		current->content = temp;
		lst = lst->next;
	}
	current->next = NULL;
	return (rv);
}
