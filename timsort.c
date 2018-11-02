/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   timsort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 15:32:18 by tnghondz          #+#    #+#             */
/*   Updated: 2018/08/30 18:04:13 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pushswap.h>

#define SWAPTOPB ((*sb)->nx && (*sb)->v < ((*sb)->nx)->v)

static void		mg2(t_stack **sa, t_stack **sb, t_out *ret, t_stack *end)
{
	if ((*sa)->v < (*sb)->v)
	{
		while ((*sa)->v < (*sb)->v)
			udtertstck(ret, RB, sa, sb);
		udtertstck(ret, PB, sa, sb);
	}
	else if ((*sa)->v > (*sb)->v && !((*sa)->v < end->v))
	{
		if ((*sa)->v > (ret->l = getlargest(*sb)))
		{
			while ((*sb)->v != ret->l)
				udtertstck(ret, RRB, sa, sb);
		}
		else
		{
			while (((*sa)->v > (*sb)->v) && ((*sa)->v > end->v))
			{
				udtertstck(ret, RRB, sa, sb);
				end = getend(sb);
			}
		}
		udtertstck(ret, PB, sa, sb);
	}
	else
		udtertstck(ret, PB, sa, sb);
}

static int		mg3(t_stack **sa, t_stack **sb, t_out *ret, t_stack *end)
{
	if (ordered(*sa))
		return (1);
	else if ((*sa)->v < end->v && ((*sa)->v) < (*sb)->v)
	{
		udtertstck(ret, PB, sa, sb);
		udtertstck(ret, RB, sa, sb);
	}
	else
		mg2(sa, sb, ret, end);
	return (0);
}

static void		mergestack(t_stack **sa, t_stack **sb, t_out *ret)
{
	t_stack *tmpb;
	int		group;
	t_stack *end;

	if (!(*sb))
		return ;
	if (SWAPTOPB)
	{
		udtertstck(ret, SB, sa, sb);
		if (bassigngroups(sb) == 1)
			return ;
	}
	ret->l = 0;
	group = (*sb)->g;
	tmpb = *sb;
	while ((*sb)->g == group)
		udtertstck(ret, PA, sa, sb);
	while ((*sa)->g == group)
	{
		end = getend(sb);
		if (mg3(sa, sb, ret, end))
			break ;
	}
	rotcor(ret, sa, sb, 1);
	bassigngroups(sb);
}

static void		met2(t_stack **sa, t_stack **sb, t_out *ret, t_stack *end)
{
	if ((*sb)->v > (*sa)->v)
		udtertstck(ret, RA, sa, sb);
	else if ((*sb)->v < (*sa)->v && (*sb)->v > end->v)
		udtertstck(ret, PA, sa, sb);
	else if ((*sb)->v < (*sa)->v && (*sb)->v < end->v)
		udtertstck(ret, RRA, sa, sb);
}

static void		mergetwo(t_stack **sa, t_stack **sb, t_out *ret)
{
	int		smallest;
	int		largest;
	t_stack	*end;

	while (*sb)
	{
		end = getend(sa);
		if ((*sb)->v < (smallest = getsmallest(*sa)))
		{
			while ((*sa)->v != smallest)
				udtertstck(ret, RA, sa, sb);
			udtertstck(ret, PA, sa, sb);
		}
		else if ((*sa)->v > (largest = getlargest(*sb)) && ordered(*sa))
		{
			while ((*sb)->v != largest)
				udtertstck(ret, RB, sa, sb);
			udtertstck(ret, PA, sa, sb);
		}
		else
			mt2(sa, sb, ret, end);
	}
	smallest = getsmallest(*sa);
	rotcor(ret, sa, sb, 0);
}
