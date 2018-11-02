/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:57:22 by tnghondz          #+#    #+#             */
/*   Updated: 2018/09/01 12:57:23 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	char	**ar;
	char	*ptrs;

	if (!s)
		return (NULL);
	ptrs = (char *)s;
	if (!(ar = ((char **)malloc(sizeof(char*) * (ft_wc(ptrs, c) + 1)))))
		return (NULL);
	i = 0;
	while (*ptrs)
	{
		if (*ptrs == c)
		{
			ptrs++;
		}
		else
		{
			ar[i] = ft_make_word(ptrs, c);
			ptrs += (ft_strlen(ar[i]));
			i++;
		}
	}
	ar[i] = (NULL);
	return (ar);
}
