/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_put_big_nbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 13:00:48 by tnghondz          #+#    #+#             */
/*   Updated: 2018/09/01 13:00:50 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <limits.h>
#include <stdint.h>
#include "libft.h"

void	pf_put_big_nbr(intmax_t n)
{
	intmax_t	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		pf_put_big_nbr(nb / 10);
		pf_put_big_nbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}
