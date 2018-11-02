/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:55:08 by tnghondz          #+#    #+#             */
/*   Updated: 2018/09/01 12:55:09 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

void	*ft_memalloc(size_t size)
{
	void	*memspace;

	memspace = (void *)malloc(size);
	if (!memspace)
		return (NULL);
	ft_bzero(memspace, size);
	return (memspace);
}
