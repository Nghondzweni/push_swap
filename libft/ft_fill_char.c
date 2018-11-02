/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:54:11 by tnghondz          #+#    #+#             */
/*   Updated: 2018/09/01 13:01:27 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_fill_char(char *value, char *s, int len, int i)
{
	int	k;

	k = 0;
	while (i <= len)
	{
		value[k] = s[i];
		k++;
		i++;
	}
	value[k] = '\0';
}