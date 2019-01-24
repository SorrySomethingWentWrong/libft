/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delchlist.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 01:17:53 by tramet            #+#    #+#             */
/*   Updated: 2019/01/19 01:17:55 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_delchlist(t_chlist **list, void (*delcont)(void *, size_t))
{
	t_link		*current;
	t_link		*next;

	if (list && *list && delcont)
	{
		current = (*list)->first;
		while (--(*list)->lst_size || !current)
		{
			next = current->next;
			ft_delonelink(list, delcont, &current);
			current = next;
		}
		ft_memdel((void **)list);
	}
}
