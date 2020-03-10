/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 19:03:40 by sunkim            #+#    #+#             */
/*   Updated: 2020/03/09 16:25:54 by sunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*return_value;
	char	*init_return;
	int		len;

	if (!s1 || !s2)
		return (NULL);
	len = sizeof(s1) + sizeof(s2);
	return_value = (char *)malloc(len + 1);
	if (!return_value)
		return (0);
	init_return = return_value;
	while (*s1)
	{
		*return_value = *s1;
		return_value++;
		s1++;
	}
	while (*s2)
	{
		*return_value = *s2;
		return_value++;
		s2++;
	}
	*return_value = 0;
	return (init_return);
}
