/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:57:12 by tnghondz          #+#    #+#             */
/*   Updated: 2018/09/01 12:57:13 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	int		flag;

	i = 0;
	flag = 0;
	while (i < len)
	{
		if (src[i] && flag == 0)
			dst[i] = src[i];
		else
		{
			flag = 1;
			dst[i] = '\0';
		}
		i++;
	}
	return (dst);
}
