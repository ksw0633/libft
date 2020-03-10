/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 16:57:45 by sunkim            #+#    #+#             */
/*   Updated: 2020/03/09 23:04:08 by sunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned long	i;
	size_t			return_value;

	if (ft_strlen(dst) >= dstsize)
		return (ft_strlen(src) + dstsize);
	i = 0;
	return_value = ft_strlen(dst) + ft_strlen(src);
	dstsize -= ft_strlen(dst);
	while (*dst)
		dst++;
	while (i < dstsize - 1 && *src)
	{
		*dst = *src;
		dst++;
		src++;
		i++;
	}
	*dst = 0;
	return (return_value);
}
