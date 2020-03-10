/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 16:51:18 by sunkim            #+#    #+#             */
/*   Updated: 2020/03/03 16:33:21 by sunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list_str	*ft_push(t_list_str *start)
{
	t_list_str *new;

	if (start == NULL)
	{
		start = (t_list_str *)malloc(sizeof(t_list_str));
		start->next = NULL;
		return (start);
	}
	while (start->next != NULL)
		start = start->next;
	new = (t_list_str *)malloc(sizeof(t_list_str));
	start->next = new;
	new->next = NULL;
	return (new);
}
