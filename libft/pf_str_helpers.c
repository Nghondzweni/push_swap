/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_str_helpers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 13:00:50 by tnghondz          #+#    #+#             */
/*   Updated: 2018/09/01 13:00:54 by tnghondz         ###   ########.fr       */
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

char	*str_precision_handler(t_box *box, char *value)
{
	int		str_len;
	char	*ret;

	if (value == NULL || box->precision < 0)
	{
		return (value);
	}
	str_len = ft_strlen(value);
	ret = ft_strdup(value);
	if (str_len > box->precision)
		ret[box->precision] = '\0';
	return (ret);
}

char	*str_printer(t_box *box, va_list *param_list, char *value)
{
	if (box->specifier == 's')
	{
		value = va_arg(*param_list, char *);
		if (value == NULL)
			return (value);
		value = ft_strdup(value);
		value = str_precision_handler(box, value);
		value = str_field_width_handler(box, value);
		if (box->minus_flag > 0)
			left_align_str(value);
	}
	else if (box->specifier == 'S')
	{
		value = (char *)(wchar_t *)va_arg(*param_list, wchar_t *);
		if (value == NULL)
			return (value);
		value = ft_strdup(value);
		value = str_precision_handler(box, value);
		value = str_field_width_handler(box, value);
		if (box->minus_flag > 0)
			left_align_str(value);
	}
	return (value);
}
