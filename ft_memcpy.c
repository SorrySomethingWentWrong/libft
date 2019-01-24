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

void			*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;

	i = 0;
	while (n--)
		((unsigned char*)dst)[i++] = *(unsigned char*)src++;
	return (dst);
}
