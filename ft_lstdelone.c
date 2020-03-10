/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 19:38:05 by sunkim            #+#    #+#             */
/*   Updated: 2020/03/03 15:41:35 by sunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Takes as a parameter a link's pointer address and
**and frees the memory of the link's content using
**the function del given as a parameter, then frees
**the link's memory using free(3). The memory of
**next must not be freed under any circumstance.
**Finally, the pointer to tohe link that was just
**freed must be set to NULL (quite similar to the
**function ft_memdel in the mandatory part).
*/

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	del((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}
