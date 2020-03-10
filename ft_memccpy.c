/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 14:49:29 by sunkim            #+#    #+#             */
/*   Updated: 2020/03/10 00:50:39 by sunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *d, const void *s, int c, size_t n)
{
	char *temp;
	char *source;
	char uc;

	uc = (char)c;
	if (!d || !s)
		return (NULL);
	temp = (char *)d;
	source = (char *)s;
	while (n > 0)
	{
		*temp = *source;
		if (*temp == uc)
			return (temp + 1);
		temp++;
		source++;
		n--;
	}
	return (NULL);
}
