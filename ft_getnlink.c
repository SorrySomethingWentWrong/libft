/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnlink.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 04:56:40 by tramet            #+#    #+#             */
/*   Updated: 2019/01/14 04:56:42 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_link static	*asc_get(t_chlist const *chlist_handler, size_t pos_in_lst)
{
	t_link		*link;
	size_t		index;

	link = chlist_handler->first;
	index = 1;
	while (index < pos_in_lst)
		link = link->next;
	return (link);
}

t_link static	*desc_get(t_chlist const *chlist_handler, size_t pos_in_lst)
{
	t_link		*link;
	size_t		index;

	link = chlist_handler->last;
	index = chlist_handler->lst_size - pos_in_lst;
	while (index--)
		link = link->prev;
	return (link);
}

t_link			*ft_getnlink(t_chlist const *chlist_handler, size_t pos_in_lst)
{
	if (!chlist_handler || chlist_handler->lst_size >= pos_in_lst)
		return ((t_link*)NULL);
	if (pos_in_lst <= chlist_handler->lst_size / 2)
		return (asc_get(chlist_handler, pos_in_lst));
	return (desc_get(chlist_handler, pos_in_lst));
}
