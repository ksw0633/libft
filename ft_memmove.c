/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 20:38:07 by sunkim            #+#    #+#             */
/*   Updated: 2020/02/25 11:59:35 by sunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*buffer;
	char	*destination;
	char	*source;
	size_t	init_len;

	init_len = 0;
	destination = (char *)dst;
	source = (char *)src;
	buffer = (char *)malloc(len);
	while (init_len < len)
	{
		buffer[(int)init_len] = source[(int)init_len];
		init_len++;
	}
	while (init_len - len < len)
	{
		destination[(int)(init_len - len)] = buffer[(int)(init_len - len)];
		init_len++;
	}
	return (dst);
}
