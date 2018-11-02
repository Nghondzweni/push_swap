/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:55:17 by tnghondz          #+#    #+#             */
/*   Updated: 2018/09/01 12:55:19 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	int					dif;
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	i = 0;
	dif = 0;
	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	while (i < n)
	{
		dif = ptr1[i] - ptr2[i];
		if (dif != 0)
			return (dif);
		i++;
	}
	return (0);
}
