/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:56:26 by tnghondz          #+#    #+#             */
/*   Updated: 2018/09/01 12:56:28 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int			i;
	const char	*ps;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			ps = &s[i];
			return ((char *)ps);
		}
		i++;
	}
	if (c == '\0' && s[i] == '\0')
	{
		ps = &s[i];
		return ((char *)ps);
	}
	return (NULL);
}
