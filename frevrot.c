/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frevrot.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 15:31:02 by tnghondz          #+#    #+#             */
/*   Updated: 2018/08/30 17:44:40 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pushswap.h>

void	frra(t_stack **stacka, t_stack **stackb)
{
	t_stack *tmpb;
	t_stack *tmpa;

	tmpb = *stackb;
	tmpa = *stacka;
	if (*stacka && (*stacka)->nx)
	{
		while (tmpa->nx)
		{
			tmpa = tmpa->nx;
		}
		tmpa->nx = *stacka;
		(tmpa->pv)->nx = NULL;
		(*stacka)->pv = tmpa;
		(*stacka) = tmpa;
		(*stacka)->pv = NULL;
	}
}

void	frrb(t_stack **stacka, t_stack **stackb)
{
	t_stack *tmpb;
	t_stack *tmpa;

	tmpb = *stackb;
	tmpa = *stacka;
	if (*stackb && (*stackb)->nx)
	{
		while (tmpb->nx)
			tmpb = tmpb->nx;
		tmpb->nx = *stackb;
		(tmpb->pv)->nx = NULL;
		(*stackb)->pv = tmpb;
		(*stackb) = tmpb;
		(*stackb)->pv = NULL;
	}
}

void	frrr(t_stack **stacka, t_stack **stackb)
{
	frra(stacka, stackb);
	frrb(stacka, stackb);
}
