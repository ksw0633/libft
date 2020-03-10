/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 18:35:59 by sunkim            #+#    #+#             */
/*   Updated: 2020/03/09 16:24:05 by sunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (s1 && s2)
	{
		while (!(*s1 - *s2) && *s1 && *s2 && n > 0)
		{
			s1++;
			s2++;
			n--;
		}
		if ((!*s1 && !*s2) || !n)
			return (1);
		return (0);
	}
	else
		return (-1);
}
