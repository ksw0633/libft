/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 14:49:29 by sunkim            #+#    #+#             */
/*   Updated: 2020/02/27 15:15:58 by sunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict d, const void *restrict s, int c, size_t n)
{
	char *temp;
	char *source;

	temp = (char *)d;
	source = (char *)s;
	while (n > 0)
	{
		*temp = *source;
		if (*temp == c)
			return (temp + 1);
		temp++;
		source++;
		n--;
	}
	return (0);
}
