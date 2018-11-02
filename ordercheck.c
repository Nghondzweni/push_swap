/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ordercheck.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 17:45:34 by tnghondz          #+#    #+#             */
/*   Updated: 2018/08/30 17:47:17 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pushswap.h>

int		isrevordered(t_stack *stacka, t_stack *stackb)
{
	int tmp;

	if (stacka)
		return (0);
	else if (!(stackb))
		return (0);
	tmp = stackb->v;
	while (stackb->nx)
	{
		if ((stackb->nx)->v < tmp)
			tmp = (stackb->nx)->v;
		else if ((stackb->nx)->v == tmp)
			return (2);
		else
			return (0);
		stackb = stackb->nx;
	}
	return (1);
}

int		revordered(t_stack *stackb)
{
	int tmp;

	if (!(stackb))
		return (0);
	tmp = stackb->v;
	while (stackb->nx)
	{
		if ((stackb->nx)->v < tmp)
			tmp = (stackb->nx)->v;
		else if ((stackb->nx)->v == tmp)
			return (2);
		else
			return (0);
		stackb = stackb->nx;
	}
	return (1);
}

int		ordered(t_stack *stackb)
{
	int tmp;

	if (!(stackb))
		return (0);
	tmp = stackb->v;
	while (stackb->nx)
	{
		if ((stackb->nx)->v > tmp)
			tmp = (stackb->nx)->v;
		else if ((stackb->nx)->v == tmp)
			return (2);
		else
			return (0);
		stackb = stackb->nx;
	}
	return (1);
}

t_tmps	*init_tmps(t_stack *stackb)
{
	t_tmps	*tmps;

	tmps = malloc(sizeof(t_tmps *));
	tmps->tmp1 = stackb->v;
	tmps->tmp2 = stackb->v;
	tmps->flag = 0;
	return (tmps);
}

int		almostordered(t_stack *stackb)
{
	t_tmps	*tmps;

	tmps = init_tmps(stackb);
	if (!(stackb))
		return (1);
	if (ordered(stackb))
		return (1);
	while (stackb)
	{
		if (!(stackb->nx))
			break ;
		if ((stackb->nx)->v > tmps->tmp1)
			tmps->tmp1 = (stackb->nx)->v;
		else if ((stackb->nx)->v == tmps->tmp1)
			return (1);
		else if (tmps->flag == 0)
			tmps->flag++;
		else
			return (0);
		stackb = stackb->nx;
	}
	if (tmps->flag == 1 && stackb->v < tmps->tmp2)
		return (1);
	return (0);
}
