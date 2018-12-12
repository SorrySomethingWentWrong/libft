/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 04:37:01 by tramet            #+#    #+#             */
/*   Updated: 2018/12/10 04:37:08 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	char	*byte_src;
	char	*byte_dst;

	byte_src = (char*) src;
	byte_dst = (char*) dst;
	i = 0;
	if (byte_dst > byte_src)
	{
		i = len;
		while (i--)
			byte_dst[i] = byte_src[i];
	}
	else
	{
		while (i < len)
		{
			byte_dst[i] = byte_src[i];
			i++;
		}
	}
	return (dst);
}
