/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freenlink.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 04:42:07 by tramet            #+#    #+#             */
/*   Updated: 2019/01/18 04:42:08 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_freenlink(t_chlist *chlist_handler, size_t pos_in_lst)
{
	ft_freelink(chlist_handler, ft_getnlink(chlist_handler, pos_in_lst));
}
