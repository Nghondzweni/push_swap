/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 13:05:45 by tnghondz          #+#    #+#             */
/*   Updated: 2018/09/01 13:05:46 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 2048
# include "libft.h"

typedef struct		s_list_1
{
	void			*rest;
	void			*start;
	int				rm;
	int				fd;
	struct s_list_1	*next;
}					t_list_1;

#endif
