/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:57:18 by tnghondz          #+#    #+#             */
/*   Updated: 2018/09/01 12:57:20 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	ptr = (char *)big;
	if (!(little[i]))
		return (ptr);
	while (ptr[i] && (i < len))
	{
		j = 0;
		while ((ptr[i + j] == little[j]) && ptr[i + j] && (j + i) < len)
		{
			j++;
		}
		if (!little[j])
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}
