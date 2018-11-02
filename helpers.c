/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 15:31:14 by tnghondz          #+#    #+#             */
/*   Updated: 2018/08/30 17:45:05 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pushswap.h>

int		stacklen(t_stack *stack)
{
	int		i;
	t_stack	*tmp;

	tmp = stack;
	i = 0;
	while (tmp)
	{
		tmp = tmp->nx;
		i++;
	}
	return (i);
}

t_stack	*getend(t_stack **stack)
{
	t_stack *end;

	if (!(*stack))
		return (NULL);
	end = *stack;
	while (end->nx)
		end = end->nx;
	return (end);
}
