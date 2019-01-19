/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addnlink.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 04:32:07 by tramet            #+#    #+#             */
/*   Updated: 2019/01/18 04:32:08 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_link	*ft_addnlink(t_chlist **list_handler, void *content,
	size_t ctnt_size, size_t pos_in_lst)
{
	t_link		*link;
	t_link		*next;

	if (!pos_in_lst || !list_handler)
		return ((t_link*)NULL);
	if (!*list_handler)
	{
		if (pos_in_lst != 1)
			return ((t_link*)NULL);
		*list_handler = ft_newchlist(link = ft_newlink(content, ctnt_size));
		return (link);
	}
	if (++(*list_handler)->lst_size > pos_in_lst ||
		!(link = ft_newlink(content, ctnt_size)))
		return ((t_link*)NULL);
	if (!(next = ft_getnlink(*list_handler, pos_in_lst)))
	{
		(*list_handler)->last->next = link;
		link->prev = (*list_handler)->last;
		(*list_handler)->last = link;
	}
	if (!(next->prev))
	{
		;
	}
	link->prev = 
	(*list_handler)->last = link;
	return (link);
}
