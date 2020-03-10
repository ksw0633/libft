/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 17:17:57 by sunkim            #+#    #+#             */
/*   Updated: 2020/03/09 23:48:47 by sunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*return_value;
	char	*temp;

	if (s && f)
	{
		i = 0;
		return_value = (char *)malloc(ft_strlen(s) + 1);
		if (!return_value)
			return (NULL);
		temp = return_value;
		while (*s)
		{
			*temp = f(i, *s);
			i++;
			s++;
			temp++;
		}
		*temp = '\0';
		return (return_value);
	}
	else
		return (NULL);
}
