/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   timsortsplit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:06:08 by tnghondz          #+#    #+#             */
/*   Updated: 2018/09/01 12:06:10 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pushswap.h>

int			similarsizegroup(t_stack *sb)
{
	int		i;
	int		j;
	t_stack	*tmp;

	tmp = sb;
	i = 0;
	j = 0;
	while (tmp && tmp->g == -1)
	{
		i++;
		tmp = tmp->nx;
	}
	while (tmp && tmp->g == -2)
	{
		j++;
		tmp = tmp->nx;
	}
	if (i > (j / 2) || j < 16)
		return (1);
	return (0);
}

void		tmdcsion(t_stack **sa, t_stack **sb, t_stack *end, t_out *ret)
{
	if ((!(*sa)->nx) || ((*sa)->v < end->v && (*sa)->v < ((*sa)->nx)->v))
	{
		if ((*sb) && ((*sa)->v < (*sb)->v) && (bassigngroups(sb) > 1))
		{
			if (similarsizegroup(*sb))
				mergestack(sa, sb, ret);
		}
		udtertstck(ret, PB, sa, sb);
	}
	else if (((*sa)->nx)->v < (*sa)->v)
	{
		udtertstck(ret, SA, sa, sb);
	}
	else if (((*sa)->nx)->v <= (end)->v && ((*sa)->nx)->v < (*sa)->v)
	{
		udtertstck(ret, SA, sa, sb);
	}
	else if ((((stacklen(*sa) == 1) && (end->v < (*sa)->v))) ||
			(end->v < (*sa)->v && (end)->v <= ((*sa)->nx)->v))
	{
		udtertstck(ret, RRA, sa, sb);
	}
	if ((*sb) && (*sb)->v < ((getend(sb))->v))
		udtertstck(ret, RB, sa, sb);
}

void		stim(t_stack **sa, t_stack **sb, t_out *ret)
{
	int		i;
	t_stack	*end;

	i = 0;
	end = getend(sa);
	if (aassigngroups(sa) == 1)
		return ;
	while (*sa)
	{
		tmdcsion(sa, sb, end, ret);
		aassigngroups(sa);
		bassigngroups(sb);
		end = getend(sa);
		if (ordered(*sa))
		{
			while (bassigngroups(sb) > 1)
				mergestack(sa, sb, ret);
			mergetwo(sa, sb, ret);
			break ;
		}
	}
}
