/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getz.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:54:16 by tnghondz          #+#    #+#             */
/*   Updated: 2018/09/01 13:01:30 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_getz(char *num)
{
	if ((num = (char *)malloc(sizeof(char) * (2))))
	{
		num[0] = '0';
		num[1] = '\0';
		return (num);
	}
	else
		return (NULL);
}
