/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 15:30:42 by tnghondz          #+#    #+#             */
/*   Updated: 2018/08/30 17:44:09 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pushswap.h>

void	processops(t_stack **stacka, t_stack **stackb, t_op *oplist, int debug)
{
	t_op	*begin;

	begin = oplist;
	if (!(begin->fp))
		return ;
	if (debug > 0)
	{
		ft_putstr_fd("YOU ARE IN DEBUG MODE\n", 2);
		debug_ops(oplist);
		debug_pstacks(*stacka, *stackb);
	}
	while (begin)
	{
		begin->fp(stacka, stackb);
		if (debug > 0)
		{
			printelement(begin->op);
			debug_pstacks(*stacka, *stackb);
		}
		begin = begin->next;
	}
}

int		isordered(t_stack *stacka, t_stack *stackb)
{
	int tmp;

	if (stackb)
		return (0);
	else if (!(stacka))
		return (0);
	tmp = stacka->v;
	while (stacka->nx)
	{
		if ((stacka->nx)->v > tmp)
			tmp = (stacka->nx)->v;
		else if ((stacka->nx)->v == tmp)
			return (2);
		else
			return (0);
		stacka = stacka->nx;
	}
	return (1);
}

void	releasememory(t_stack *sa, t_op *oplist)
{
	t_op	*optmp;
	t_stack *satmp;

	while (oplist)
	{
		optmp = oplist;
		oplist = oplist->next;
		free(optmp);
	}
	while (sa)
	{
		satmp = sa;
		sa = sa->nx;
		free(satmp);
	}
	free(sa);
}

int		main(int ac, char **av)
{
	t_op	*oplist;
	t_stack	*stacka;
	t_stack *stackb;
	int		tmp;

	tmp = 0;
	stacka = NULL;
	stackb = NULL;
	if (!(stacka = valinput(ac, av, stacka)))
		return (0);
	oplist = getoplist();
	if (!(ft_strcmp("-v", av[1])))
		tmp = 1;
	processops(&stacka, &stackb, oplist, tmp);
	if ((tmp = isordered(stacka, stackb)))
	{
		if (tmp == 1)
			ft_printf("OK\n");
		else
			write(1, "Error\n", 6);
	}
	else
		ft_printf("KO\n");
	releasememory(stacka, oplist);
	return (0);
}
