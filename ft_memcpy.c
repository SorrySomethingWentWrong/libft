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

void static		recurscpy(unsigned char const *s, unsigned char *d, size_t n)
{
	if (n)
	{
		*d = *s;
		recurscpy((unsigned char const *)++s, ++d, --n);
	}
}

void			*ft_memcpy(void *dst, const void *src, size_t n)
{
	recurscpy((unsigned char const *)src, (unsigned char*)dst, n);
	return (dst);
}
