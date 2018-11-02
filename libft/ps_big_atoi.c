/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_big_atoi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 13:01:02 by tnghondz          #+#    #+#             */
/*   Updated: 2018/09/01 13:01:14 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <inttypes.h>

intmax_t	ps_big_atoi(const char *str)
{
	int			sign;
	intmax_t	number;

	number = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' ||
			*str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-')
	{
		sign = sign * -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while ((*str > 47) && (*str < 58))
	{
		number *= 10;
		number += *str - '0';
		str++;
	}
	return (number * sign);
}
