/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 23:00:39 by tramet            #+#    #+#             */
/*   Updated: 2018/12/09 23:00:41 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void * dst, const void * src, size_t n)
{
	char			*byte_src;
	char			*byte_dst;

	byte_src = (char*)src;
	byte_dst = (char*)dst;
	while (n)
	{
		n--;
		byte_dst[n] = byte_src[n];
	}
	return (dst);
}