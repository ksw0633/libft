/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 10:37:00 by sunkim            #+#    #+#             */
/*   Updated: 2020/03/10 02:04:17 by sunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned long	i;

	if (!dst || !src)
		return (NULL);
	i = 0;
	while (i < len && dst[i])
	{
		if(src[i])
			dst[i] = src[i];
		else
			dst[i] = '\0';
		i++;
	}
	return (dst);
}*/

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned long	i;

	if (!dst || !src)
		return (NULL);
	i = 0;
	while (i < len && src[i] && dst[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (!src[i] && i != len)
	{
		while (i < len && dst[i])
		{
			dst[i] = '\0';
			i++;
		}
	}
	return (dst);
}
