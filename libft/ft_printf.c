/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:55:45 by tnghondz          #+#    #+#             */
/*   Updated: 2018/09/01 12:55:47 by tnghondz         ###   ########.fr       */
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

int	ft_printf(const char *format, ...)
{
	int		len_value;
	va_list	param_list;
	t_box	*box;

	va_start(param_list, format);
	if (!(box = box_init()))
		return (0);
	len_value = 0;
	while (*format != '\0')
	{
		if (move_past_specifier(&format, box, &len_value))
		{
			len_value += print_spec(box, &param_list);
		}
	}
	free(box);
	va_end(param_list);
	return (len_value);
}
