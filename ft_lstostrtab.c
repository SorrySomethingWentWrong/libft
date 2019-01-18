/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstostrtab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 02:16:56 by tramet            #+#    #+#             */
/*   Updated: 2019/01/17 02:16:57 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_lstostrtab(t_list const *list)
{
	size_t		len;
	char		**tab;

	len = ft_lstlen(list);
	if (!(tab = (char**)malloc(sizeof(char*) * (len + 1))))
		return ((char**)NULL);
	tab[len] = (char*)NULL;
	while (len)
	{
		tab[--len] = (char*)list->content;
		list = list->next;
	}
	return (tab);
}
