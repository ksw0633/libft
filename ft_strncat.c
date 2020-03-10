/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 15:26:16 by sunkim            #+#    #+#             */
/*   Updated: 2020/02/27 15:16:31 by sunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	char			*init_s1;
	unsigned long	i;

	init_s1 = s1;
	i = 0;
	while (*s1)
		s1++;
	while (i < n && *s2 != 0)
	{
		*s1 = *s2;
		s1++;
		s2++;
		i++;
	}
	*s1 = 0;
	return (init_s1);
}
