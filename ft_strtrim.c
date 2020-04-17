/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 19:24:51 by sunkim            #+#    #+#             */
/*   Updated: 2020/04/17 16:07:34 by sunkim           ###   ########.fr       */
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

static char const	*check_empty(char const *s, char *table)
{
	int isblank;

	if (s == NULL)
		return (NULL);
	isblank = 1;
	while (table[(int)(*s)])
	{
		s++;
		isblank = 0;
	}
	if (!*s && !isblank)
		return (NULL);
	return (s);
}

char				*checktable(char *table, char const *set)
{
	int i;

	i = 0;
	table = (char *)malloc(sizeof(char) * 256);
	while (i < 256)
		table[i++] = 0;
	while (*set)
	{
		table[(int)(*set)] = 1;
		set++;
	}
	return (table);
}

char				*ft_strtrim(char const *s, char const *set)
{
	char	*temp;
	char	*start;
	char	*end;
	char	*return_value;
	char	*table;

	table = NULL;
	table = checktable(table, set);
	if ((temp = (char *)check_empty(s, table)) == NULL)
	{
		return_value = (char *)malloc(sizeof(char));
		*return_value = '\0';
		return (return_value);
	}
	start = temp;
	while (*temp++)
		;
	temp--;
	while (table[(int)(*(temp - 1))])
		temp--;
	end = (char *)temp;
	return_value = (char *)malloc(sizeof(char) * (int)(end - start) + 1);
	cpy(return_value, start, (unsigned char)(end - start));
	return (return_value);
}
