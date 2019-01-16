/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addstartlink.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 00:35:55 by tramet            #+#    #+#             */
/*   Updated: 2019/01/14 00:35:56 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_chlist	*ft_addstartlink(t_chlist *chlist_handler, void const *content,
	size_t ctnt_size)
{
	return (t_addnlink(chlist_handler, content, ctnt_size, (size_t)1));
}
