/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 11:33:26 by sunkim            #+#    #+#             */
/*   Updated: 2020/04/17 11:33:31 by sunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*return_value;
	unsigned char	*temp;

	return_value = (void *)malloc(size * count);
	if (!return_value)
		return (0);
	temp = (unsigned char *)return_value;
	while (count > 0)
	{
		*temp = 0;
		temp++;
		count--;
	}
	return (return_value);
}
