/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:57:14 by tnghondz          #+#    #+#             */
/*   Updated: 2018/09/01 12:57:15 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int i;

	if (!s1 || !s2)
		return (0);
	i = ft_strncmp((char *)s1, (char *)s2, n);
	if (i == 0)
		return (1);
	else
		return (0);
}
