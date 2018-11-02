/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:55:10 by tnghondz          #+#    #+#             */
/*   Updated: 2018/09/01 12:55:11 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;
	unsigned char	newc;

	i = 0;
	p1 = (unsigned char *)dst;
	p2 = (unsigned char *)src;
	newc = (unsigned char)c;
	while (i < n)
	{
		*(p1 + i) = *(p2 + i);
		i++;
		if (*(p1 + i - 1) == newc)
			return ((p1 + i));
	}
	return (NULL);
}
