/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 10:58:26 by sunkim            #+#    #+#             */
/*   Updated: 2020/02/25 14:05:21 by sunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void			*return_value;
	unsigned char	*temp;

	return_value = malloc(size);
	if (!return_value)
		return (0);
	temp = (unsigned char *)return_value;
	while (size > 0)
	{
		*temp = 0;
		temp++;
		size--;
	}
	return (return_value);
}
