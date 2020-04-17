/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 11:35:53 by sunkim            #+#    #+#             */
/*   Updated: 2020/04/17 11:35:54 by sunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	int		cnt;

	cnt = 0;
	temp = lst;
	while (temp != NULL)
	{
		cnt++;
		temp = temp->next;
	}
	return (cnt);
}
