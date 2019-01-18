/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstreverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 05:13:34 by tramet            #+#    #+#             */
/*   Updated: 2019/01/18 05:13:36 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list static	*recrevlst(t_list *prev, t_list *list)
{
	t_list		*temp;

	if (!list->next)
	{
		list->next = prev;
		return (list);
	}
	temp = list->next;
	list->next = prev;
	return (recrevlst(list, temp));
}

t_list			*ft_lstreverse(t_list *list)
{
	t_list		*temp;

	if (!list)
		return ((t_list*)NULL);
	if (list->next)
	{
		temp = list->next;
		list->next = (t_list*)NULL;
		return (recrevlst(list, temp));
	}
	return (list);
}
