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

t_link static	*asc_get(t_chlist const *list_handler, size_t pos_in_lst)
{
	t_link		*link;
	size_t		index;

	link = list_handler->first;
	index = 1;
	while (index < pos_in_lst)
		link = link->next;
	return (link);
}

t_link static	*desc_get(t_chlist const *list_handler, size_t pos_in_lst)
{
	t_link		*link;
	size_t		index;

	link = list_handler->last;
	index = list_handler->lst_size - pos_in_lst;
	while (index--)
		link = link->prev;
	return (link);
}

t_link			*ft_getnlink(t_chlist const *list_handler, size_t pos_in_lst)
{
	if (!list_handler || !list_handler->lst_size ||
		list_handler->lst_size < pos_in_lst)
		return ((t_link*)NULL);
	if (pos_in_lst <= list_handler->lst_size / 2)
		return (asc_get(list_handler, pos_in_lst));
	return (desc_get(list_handler, pos_in_lst));
}
