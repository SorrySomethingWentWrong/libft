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

t_link	*ft_addnlink(t_chlist **chlist_handler, void *content,
	size_t ctnt_size, size_t pos_in_lst)
{
	size_t		i;
	t_link		*chlink;

	if (!content)
		return ((t_link*)NULL);
	if (!chlist_handler)
	{
		if (pos_in_lst != (size_t)1 || !(chlist_handler =
			ft_newchlist(chlink = ft_newlink(content, ctnt_size))))
			return ((t_link*)NULL);
		return (chlink);
	}
	else 
	{
		if (*chlist_handler->lst_size < pos_in_lst ||
			!chlink = ft_newlink(content, ctnt_size))
			return ((t_link*)NULL);
		;
	}
	return ((t_link*)NULL);
}
