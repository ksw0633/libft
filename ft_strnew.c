/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 16:43:20 by sunkim            #+#    #+#             */
/*   Updated: 2020/03/10 00:25:14 by sunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char 	*return_value;
	int		i;

	i = 0;
	size++;	
	return_value = (char *)malloc(size);
	if (!return_value)
		return (0);
	while (size > 0)
	{
		return_value[i++] = '\0';
		size--;
	}
	return (return_value);
}
