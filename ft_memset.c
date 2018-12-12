/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 10:45:21 by tramet            #+#    #+#             */
/*   Updated: 2018/12/08 10:45:25 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned long	i;
	unsigned char	*byte_ptr;

	i = 0;
	byte_ptr = (unsigned char*) s;
	while (i < n)
	{
		byte_ptr[i] = (unsigned char) c;
		i++;
	}
	return (s);
}
