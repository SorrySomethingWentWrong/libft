/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delonelink.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 01:47:06 by tramet            #+#    #+#             */
/*   Updated: 2019/01/19 01:47:08 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_delonelink(t_chlist **list, void (*delcont)(void *, size_t),
	t_link **todel)
{
	if (!(*todel))
		return ; 
	if(list && *list)
	{
		if ((*todel)->next)
		{
			if ((*todel)->prev)
			{
				(*todel)->next->prev = (*todel)->prev;
				(*todel)->prev->next = (*todel)->next;
			}
			else
			{
				(*list)->first = (*todel)->next;
				(*todel)->next->prev = (t_link*)NULL;
			}
		}
		else
		{
			(*list)->last = (*todel)->prev;
			(*todel)->prev->next = (t_link*)NULL;
		}
		(*list)->lst_size -= 1;
	}
	(*delcont)((*todel)->content, (*todel)->ctnt_size);
	ft_memdel((void**)todel);
}
