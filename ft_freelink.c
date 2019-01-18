/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freelink.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 04:43:24 by tramet            #+#    #+#             */
/*   Updated: 2019/01/18 04:43:25 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_freelink(t_chlist *chlist_handler, t_link *link)
{
	if (link)
	{
		if (!link->prev && link == chlist_handler->first)
		{
			chlist_handler->first = link->next;
			link->next->prev = (t_link*)NULL;
		}
		else if (!link->next && link == chlist_handler->last)
		{
			chlist_handler->last = link->prev;
			link->prev->next = (t_link*)NULL;
		}
		else
		{
			link->prev->next = link->next;
			link->next->prev = link->prev;
		}
		free(link);
	}
}
