/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 22:24:53 by sunkim            #+#    #+#             */
/*   Updated: 2020/03/09 20:02:48 by sunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*search(char *temp_hay, char *temp_n, size_t temp_len)
{
	while (*temp_hay == *temp_n && *temp_hay && *temp_n && temp_len > 0)
	{
		temp_hay++;
		temp_n++;
		temp_len--;
	}
	return (temp_n);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*temp_hay;
	size_t	temp_len;
	char	*temp_n;

	temp_len = len;
	temp_n = (char *)needle;
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && temp_len > 0)
	{
		temp_hay = (char *)haystack;
		temp_len = len;
		temp_n = search(temp_hay, temp_n, temp_len);
		if (!*temp_n)
			return ((char *)haystack);
		else
			temp_n = (char *)needle;
		haystack++;
		len--;
	}
	return (NULL);
}
