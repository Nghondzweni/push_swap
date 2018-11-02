/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:56:41 by tnghondz          #+#    #+#             */
/*   Updated: 2018/09/01 12:56:42 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*copy;

	i = 0;
	while (s1[i])
		i++;
	copy = (char *)malloc(sizeof(char) * (i + 1));
	if (!copy)
		return (0);
	copy[i] = '\0';
	i = 0;
	while (s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	return (copy);
}
