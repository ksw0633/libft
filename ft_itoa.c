/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 13:15:08 by sunkim            #+#    #+#             */
/*   Updated: 2020/03/05 15:34:40 by sunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		find_len(int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	len++;
	return (len);
}

static void		find_nbr(char *str, int n, int isneg, int len)
{
	if (isneg == 1)
		len--;
	while (len > 0)
	{
		if (isneg)
			*str = (n % 10) * -1 + 48;
		else
			*str = n % 10 + 48;
		n = n / 10;
		str++;
		len--;
	}
	if (isneg == 1)
		*str = '-';
}

static void		rev_str(char *str, int len)
{
	int			i;
	char		temp;

	i = 0;
	while (i < len / 2)
	{
		temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
		i++;
	}
}

char			*ft_itoa(int n)
{
	int			isneg;
	int			len;
	char		*rv;

	if (!n)
	{
		rv = (char *)malloc(sizeof(char));
		*rv = '0';
		return (rv);
	}
	isneg = 0;
	if (n < 0)
		isneg = 1;
	len = find_len(n);
	if (isneg == 1)
		len++;
	rv = (char *)malloc(sizeof(char) * len);
	len--;
	find_nbr(rv, n, isneg, len);
	rev_str(rv, len);
	*(rv + len) = 0;
	return (rv);
}
