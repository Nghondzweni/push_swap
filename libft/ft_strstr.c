/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:57:28 by tnghondz          #+#    #+#             */
/*   Updated: 2018/09/01 12:57:30 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strstr(const char *big, const char *little)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	ptr = (char *)big;
	if (!(little[i]) && !(ptr[i]))
		return (ptr);
	while (ptr[i])
	{
		j = 0;
		while ((ptr[i + j] == little[j]) && ptr[i + j])
		{
			j++;
		}
		if (!little[j])
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}
