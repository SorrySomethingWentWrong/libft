/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addendlink.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 04:33:10 by tramet            #+#    #+#             */
/*   Updated: 2019/01/18 04:33:11 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_link	*ft_addendlink(t_chlist **chlist_handler, void *content,
	size_t ctnt_size)
{
	if (!chlist_handler || !*chlist_handler)
		return (ft_addnlink(chlist_handler, content, ctnt_size, (size_t)1));
	return (ft_addnlink(chlist_handler, content, ctnt_size,
		(*chlist_handler)->lst_size));
}
