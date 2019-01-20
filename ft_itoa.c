/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 07:44:26 by tramet            #+#    #+#             */
/*   Updated: 2019/01/16 07:44:27 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t static	countdigits(int n)
{
	return (n ? 1 + countdigits(n / 10) : 0);
}

char			*ft_itoa(int n)
{
	char		*s;

	if (n == 0xffffffff)
			return ("-2147483648");
	if (n >> (sizeof(int) - 1))
	{
		if (!(s = ft_strnew(1 + countdigits(n))))
			return ((char*)NULL);
		*s++ = '-';
	}
	else if (!(s = ft_strnew(countdigits(n))))
		return ((char*)NULL);
	while (*s)
	{
		*s = '0' + n % 10;
		n /= 10;
	}
	return (s);
}
