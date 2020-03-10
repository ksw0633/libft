/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 20:01:27 by sunkim            #+#    #+#             */
/*   Updated: 2020/02/25 11:40:41 by sunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *return_value;

	return_value = 0;
	while (*s)
	{
		if (*s == c)
			return_value = (char*)s;
		s++;
	}
	if (!c)
		return_value = (char*)s;
	return (return_value);
}
