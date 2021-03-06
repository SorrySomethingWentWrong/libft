/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 00:24:10 by tramet            #+#    #+#             */
/*   Updated: 2019/01/14 00:24:11 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (alst && new)
	{
		if (!*alst)
		{
			new->next = (t_list*)NULL;
			*alst = new;
		}
		else
		{
			new->next = *alst;
			*alst = new;
		}
	}
}
