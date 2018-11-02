/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:57:10 by tnghondz          #+#    #+#             */
/*   Updated: 2018/09/01 12:57:11 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0 && (!(s1[0]) || !(s2[0])))
		return (0);
	while (*s1 && *s2 && (*s1 == *s2) && (n > 0))
	{
		s1++;
		s2++;
		n--;
	}
	if (*(s1 - 1) == *(s2 - 1) && n == 0)
		return (0);
	else if (*s1 == *s2)
		return (0);
	else if (*s1 == '\0' && *s2 != '\0')
		return (*(unsigned char*)s1 - *(unsigned char*)s2);
	else if (*s2 == '\0' && *s1 != '\0')
		return (*(unsigned char*)s1 - *(unsigned char*)s2);
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}
