/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:56:28 by tnghondz          #+#    #+#             */
/*   Updated: 2018/09/01 12:56:31 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strclr(char *s)
{
	int i;

	i = 0;
	if (!s || !*s)
		return ;
	while (s[i])
	{
		s[i] = '\0';
		i++;
	}
}