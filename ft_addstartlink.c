/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addstartlink.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 04:32:42 by tramet            #+#    #+#             */
/*   Updated: 2019/01/18 04:32:45 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_link	*ft_addstartlink(t_chlist **chlist_handler, void *content,
	size_t ctnt_size)
{
	return (ft_addnlink(chlist_handler, content, ctnt_size, (size_t)1));
}
