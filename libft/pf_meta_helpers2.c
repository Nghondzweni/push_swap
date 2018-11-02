/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_meta_helpers2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 13:00:19 by tnghondz          #+#    #+#             */
/*   Updated: 2018/09/01 13:00:20 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>
#include "libft.h"
#include <limits.h>
#include <stddef.h>
#include <stdint.h>
#include <stddef.h>
#include <wchar.h>

char	*str_field_width_handler(t_box *box, char *value)
{
	int		i;
	int		j;
	char	*giver;
	int		min;

	i = ((value == NULL) ? 0 : ft_strlen(value));
	j = 0;
	min = box->field_width;
	if ((i = (min - i)) > 0)
	{
		giver = (char *)ft_memalloc(1 + min);
		while (j < i)
		{
			giver[j] = ' ';
			j++;
		}
		giver[j] = '\0';
		ft_strcat(giver, value);
		ft_strdel(&value);
		return (giver);
	}
	return (value);
}
