/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 10:37:00 by sunkim            #+#    #+#             */
/*   Updated: 2020/02/25 12:07:17 by sunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char			*init_dst;
	unsigned long	i;

	init_dst = dst;
	i = 0;
	while (i < len && *src != 0)
	{
		*dst = *src;
		dst++;
		src++;
		i++;
	}
	if (*src == 0 && i != len)
	{
		while (i <= len)
		{
			*dst = 0;
			i++;
			dst++;
		}
	}
	return (init_dst);
}
