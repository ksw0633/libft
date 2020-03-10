/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 14:12:38 by sunkim            #+#    #+#             */
/*   Updated: 2020/03/09 22:33:06 by sunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void *init_dst;
	char *temp;
	char *source;
	
	if (dst == NULL || src == NULL)
		return (NULL);
	init_dst = dst;
	temp = (char *)dst;
	source = (char *)src;
	init_dst = dst;
	while (n > 0)
	{
		*temp = *source;
		temp++;
		source++;
		n--;
	}
	return (init_dst);
}
