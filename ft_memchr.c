/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 01:03:04 by tramet            #+#    #+#             */
/*   Updated: 2018/12/13 01:03:06 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	unsigned long	i;
	unsigned char	*founded;

	i = 0;
	founded = (unsigned char*)s;
	while (i < n)
	{
		if (founded[i] == (unsigned char)c)
			return ((void*)founded);
		i++;
	}
	return (NULL);
}
