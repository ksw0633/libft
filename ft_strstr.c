/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 20:10:51 by sunkim            #+#    #+#             */
/*   Updated: 2020/02/25 12:00:58 by sunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char *temp_hay;
	char *temp_needle;

	temp_needle = (char *)needle;
	if (!*needle)
		return ((char *)haystack);
	while (*haystack)
	{
		temp_hay = (char *)haystack;
		while (*temp_hay == *temp_needle && *temp_hay && *temp_needle)
		{
			temp_hay++;
			temp_needle++;
		}
		if (!*temp_needle)
			return ((char *)haystack);
		else
			temp_needle = (char *)needle;
		haystack++;
	}
	return (0);
}
