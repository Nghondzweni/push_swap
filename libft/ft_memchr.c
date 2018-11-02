/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:55:15 by tnghondz          #+#    #+#             */
/*   Updated: 2018/09/01 12:55:17 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sptr;
	unsigned char	newc;

	sptr = (unsigned char *)s;
	newc = (unsigned char)c;
	while (n > 0)
	{
		if (*sptr == newc)
			return (sptr);
		sptr++;
		n--;
	}
	return (NULL);
}
