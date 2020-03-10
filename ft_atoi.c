/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:02:40 by sunkim            #+#    #+#             */
/*   Updated: 2020/03/09 19:45:11 by sunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int ans;
	int isn;
	int i;

	i = 0;
	ans = 0;
	isn = 1;
	while (str[i] < 33)
	{
		if (str[i] < 0)
			return (0);
		i++;
	}
	if (str[i] == '-')
	{
		isn = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		ans = ans * 10 + (str[i++] - 48);
	return (isn * ans);
}
