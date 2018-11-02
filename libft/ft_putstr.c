/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:56:10 by tnghondz          #+#    #+#             */
/*   Updated: 2018/09/01 12:56:12 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	size_t	i;

	if (!str)
		return ;
	i = ft_strlen(str);
	write(1, str, i);
}
