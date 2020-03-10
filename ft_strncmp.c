/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 16:53:43 by sunkim            #+#    #+#             */
/*   Updated: 2020/03/09 18:26:40 by sunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (!(*s1 - *s2) && n > 0)
	{
		if (!*s1)
			return (0);
		s1++;
		s2++;
		n--;
	}
	if (!n)
		return (0);
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}
