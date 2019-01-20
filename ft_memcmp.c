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
	int				result;

	while (n--)
	{
		result = *(unsigned char*)s1++ - *(unsigned char*)s2++;
		if (result)
			return (result);
	}
	return (0);
}
