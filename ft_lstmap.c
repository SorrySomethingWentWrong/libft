/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 09:54:45 by tramet            #+#    #+#             */
/*   Updated: 2019/01/18 09:54:52 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*maped;
	t_list		*next;

	if (lst)
	{
		next = ft_lstmap(lst->next, f);
		if (!(maped = (t_list*)malloc(sizeof(t_list))) || !(ft_memcpy(maped,
			(*f)(lst), sizeof(t_list))))
			return ((t_list*)NULL);
		maped->next = next;
		return (maped);
	}
	return ((t_list*)NULL);
}
