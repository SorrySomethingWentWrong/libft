/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 01:12:59 by tramet            #+#    #+#             */
/*   Updated: 2018/12/13 01:13:02 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned long	i;
	int				result;
	unsigned char	*s1_ptr;
	unsigned char	*s2_ptr;

	i = 0;
	s1_ptr = (unsigned char*)s1;
	s2_ptr = (unsigned char*)s2;
	while (i < n)
	{
		result = s2_ptr[i] - s1_ptr[i];
		if (result)
			return (result);
		i++;
	}
	return (0);
}
