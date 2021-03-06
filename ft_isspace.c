/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 00:06:09 by sunkim            #+#    #+#             */
/*   Updated: 2020/04/17 13:42:53 by sunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(int c)
{
	if (c == '\t' || c == '\n')
		return (-1);
	if (c == '\v' || c == '\f')
		return (-1);
	if (c == '\r' || c == ' ')
		return (-1);
	return (1);
}
