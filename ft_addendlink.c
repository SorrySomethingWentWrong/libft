/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addendlink.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 00:35:32 by tramet            #+#    #+#             */
/*   Updated: 2019/01/14 00:35:34 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_chlist	*ft_addendlink(t_chlist *chlist_handler, void const *content,
	size_t ctnt_size)
{
	if (!chlist_handler)
		return (t_addnlink(chlist_handler, content, ctnt_size, (size_t)1));
	return (t_addnlink(chlist_handler, content, ctnt_size,
		*chlist_handler->lst_size));
}
