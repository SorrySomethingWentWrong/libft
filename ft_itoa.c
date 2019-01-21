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
	size_t		count;

	count = 0;
	while (n && ++count)
		n /= 10;
	return (count);
}

char			*ft_itoa(int n)
{
	char		*s;
	size_t		len;
	size_t		i;

	if (!n)
		return (ft_strcpy(ft_strnew(1), "0"));
	if (n == -2147483648)
		return (ft_strcpy(ft_strnew(11), "-2147483648"));
	len = countdigits(n);
	if (n < 0)
	{
		if (!(s = ft_strnew(1 + len)))
			return ((char*)NULL);
		*s++ = '-';
	}
	else if (!(s = ft_strnew(len)))
		return ((char*)NULL);
	i = 0;
	while (i < len)
	{
		s[i++] = '0' + (n % 10);
		n /= 10;
	}
	return (s);
}
