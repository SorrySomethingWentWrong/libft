/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addnlink.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 00:36:15 by tramet            #+#    #+#             */
/*   Updated: 2019/01/14 00:36:16 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_chlist	*ft_addnlink(t_chlist **chlist_handler, void const *content,
	size_t ctnt_size, size_t pos_in_lst)
{
	size_t		i;
	t_link		*chlink;

	if (!content || !ctnt_size)
		return ((t_chlist*)NULL);
	if (!chlist_handler)
	{
		if (pos_in_lst != (size_t)1 || !(chlist_handler =
			ft_newchlist(chlink = ft_newlink(content, ctnt_size))))
			return ((t_chlist*)NULL);
		return (chlist_handler);
	}
	else 
	{
		if (*chlist_handler->lst_size < pos_in_lst ||
			!chlink = ft_newlink(content, ctnt_size))
			return ((t_chlist*)NULL);
		;
	}
	return ((t_chlist*)NULL);
}
