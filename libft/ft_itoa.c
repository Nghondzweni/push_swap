/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:54:47 by tnghondz          #+#    #+#             */
/*   Updated: 2018/09/01 13:01:53 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

char	*ft_itoa(int n)
{
	int			len;
	long		copy;
	char		*num;

	len = 0;
	num = NULL;
	copy = n;
	if (n == 0)
	{
		if ((num = ft_getz(num)))
			return (num);
		else
			return (NULL);
	}
	if (copy < 0)
		len++;
	while (copy != 0)
	{
		len++;
		copy = copy / 10;
	}
	if (!(num = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_mnbr(num, len, n);
	return (num);
}
