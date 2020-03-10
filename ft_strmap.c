/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 17:05:43 by sunkim            #+#    #+#             */
/*   Updated: 2020/03/08 21:24:06 by sunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *return_value;
	char *temp;

	if (s && f)
	{
		return_value = (char *)malloc(ft_strlen(s) + 1);
		temp = return_value;
		while (*s)
		{
			*temp = f(*s);
			s++;
			temp++;
		}
		return (return_value);
	}
	else
		return (NULL);
}
