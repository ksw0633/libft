/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 16:19:21 by sunkim            #+#    #+#             */
/*   Updated: 2020/03/10 00:10:09 by sunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *str;
	char *temp;

	str = (char *)malloc(ft_strlen(s1) + 1);
	if (!str)
		return (NULL);
	temp = str;
	while (*s1 != 0)
	{
		*temp = *s1;
		temp++;
		s1++;
	}
	*temp = 0;
	return (str);
}
