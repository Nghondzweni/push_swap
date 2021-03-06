/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rethelp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 15:32:11 by tnghondz          #+#    #+#             */
/*   Updated: 2018/08/30 17:46:07 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pushswap.h>

int		getlargest(t_stack *sb)
{
	int		largest;
	t_stack	*tmp;

	tmp = sb;
	largest = tmp->v;
	while (tmp)
	{
		if (largest < tmp->v)
			largest = tmp->v;
		tmp = tmp->nx;
	}
	return (largest);
}

int		wheredest(t_stack *sb)
{
	int		largest;
	t_stack	*tmp;
	int		loc;
	int		i;

	tmp = sb;
	largest = tmp->v;
	loc = 0;
	i = 0;
	while (tmp)
	{
		i++;
		if (largest < tmp->v)
		{
			largest = tmp->v;
			loc = i;
		}
		tmp = tmp->nx;
	}
	return (loc < (i / 2) ? loc : (((i + 1) - loc) * -1));
}

int		wheredestj(t_stack *sb, int j)
{
	int		goal;
	t_stack	*tmp;
	int		loc;
	int		i;

	tmp = sb;
	goal = j;
	loc = 0;
	i = 0;
	while (tmp)
	{
		if (goal == tmp->v)
		{
			loc = i;
		}
		tmp = tmp->nx;
		i++;
	}
	return (loc <= (i / 2) ? 1 : -1);
}
