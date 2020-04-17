/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 11:45:08 by sunkim            #+#    #+#             */
/*   Updated: 2020/04/17 11:45:11 by sunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s1, unsigned int start, size_t len)
{
	char *return_value;
	char *init_return;

	if (s1)
	{
		return_value = (char *)malloc(len + 1);
		if (!return_value)
			return (0);
		init_return = return_value;
		while (len > 0)
		{
			*return_value = *(s1 + start);
			return_value++;
			s1++;
			len--;
		}
		*return_value = '\0';
		return (init_return);
	}
	else
		return (NULL);
}
