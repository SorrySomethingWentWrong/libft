/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newchlist.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 22:08:13 by tramet            #+#    #+#             */
/*   Updated: 2019/01/12 22:08:26 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_chlist	*ft_newchlist(t_link *link)
{
	t_chlist	*chlist;

	chlist = NULL;
	if (!(chlist = (t_chlist*)malloc(sizeof(t_chlist))))
		return ((t_chlist*)NULL);
	if (link)
	{
		chlist->first = link;
		chlist->last = link;
		chlist->lst_size = (size_t)1;
	}
	else
	{
		chlist->first = (t_link*)NULL;
		chlist->last = (t_link*)NULL;
		chlist->lst_size = (size_t)0;
	}
	return (chlist);
}
