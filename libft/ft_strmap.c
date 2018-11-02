/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:57:02 by tnghondz          #+#    #+#             */
/*   Updated: 2018/09/01 12:57:04 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*copy;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	copy = ft_strdup(s);
	if (!copy)
		return (NULL);
	while (copy[i])
	{
		copy[i] = f(copy[i]);
		i++;
	}
	return (copy);
}
