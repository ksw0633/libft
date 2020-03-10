/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 16:49:48 by sunkim            #+#    #+#             */
/*   Updated: 2020/03/05 16:48:39 by sunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list	*temp;

	temp = *alst;
	if (*alst != NULL)
	{
		*alst = new;
		new->next = temp;
	}
	else
	{
		*alst = new;
		new->next = NULL;
	}
}
