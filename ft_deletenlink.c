/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deletenlink.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 23:26:43 by tramet            #+#    #+#             */
/*   Updated: 2019/01/15 23:28:32 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_deletenlink(t_chlist *chlist_handler, size_t pos_in_lst)
{
	t_link		*link;
	t_link		*swap;

	link = ft_getnlink(chlist_handler, pos_in_lst);
	if (link)
	{
		link->prev->next = link->next;
		link->next->prev = link->prev;
		free(link);
	}
}
