/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 19:24:51 by sunkim            #+#    #+#             */
/*   Updated: 2020/03/09 16:39:15 by sunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char			*cpy(char *dst, const char *src, size_t len)
{
	char			*init_dst;
	unsigned long	i;

	init_dst = dst;
	i = 0;
	while (i < len && *src != 0)
	{
		*dst = *src;
		dst++;
		src++;
		i++;
	}
	if (*src == 0 && i != len)
	{
		while (i <= len)
		{
			*dst = 0;
			i++;
			dst++;
		}
	}
	*(init_dst + len) = '\0';
	return (init_dst);
}

static char const	*check_empty(char const *s)
{
	int isblank;

	if (s == NULL)
		return (NULL);
	isblank = 1;
	while (*s == ' ' || *s == '\n' || *s == '\t')
	{
		s++;
		isblank = 0;
	}
	if (!*s && !isblank)
		return (NULL);
	return (s);
}

char				*ft_strtrim(char const *s)
{
	char	*temp;
	char	*start;
	char	*end;
	char	*return_value;
	char	is_blank;

	is_blank = 1;
	if ((temp = (char *)check_empty(s)) == NULL)
	{
		return_value = (char *)malloc(sizeof(char));
		*return_value = '\0';
		return (return_value);
	}
	start = temp;
	while (*temp++)
		;
	temp--;
	while (*(temp - 1) == ' ' || *(temp - 1) == '\n' || *(temp - 1) == '\t')
		temp--;
	end = (char *)temp;
	return_value = (char *)malloc(sizeof(char) * (int)(end - start) + 1);
	if (!return_value)
		return (NULL);
	cpy(return_value, start, (unsigned char)(end - start));
	return (return_value);
}
