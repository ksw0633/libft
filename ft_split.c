/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 08:58:59 by sunkim            #+#    #+#             */
/*   Updated: 2020/04/17 08:59:08 by sunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		find_word(char const *s, char c)
{
	int wordcnt;

	wordcnt = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			while (*s && *s != c)
				s++;
			wordcnt++;
		}
	}
	return (wordcnt);
}

static int		find_len(char const *s, char c)
{
	int len;

	len = 0;
	while (*s && *s != c)
	{
		s++;
		len++;
	}
	return (len);
}

char			**ft_split(char const *s, char c)
{
	char	**rv;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s || (!(rv = (char **)malloc(sizeof(char *) * (find_word(s, c) + 1)))))
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s && *s != c)
		{
			if (!(rv[i] = (char *)malloc(sizeof(char) * (find_len(s, c) + 1))))
				return (NULL);
			while (*s && *s != c)
				rv[i][j++] = (char)*s++;
			rv[i][j] = '\0';
			i++;
			j = 0;
		}
	}
	rv[i] = NULL;
	return (rv);
}
