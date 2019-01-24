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

static size_t	countdigits(int n)
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

	if (!n)
		return (ft_strcpy(ft_strnew(1), "0"));
	len = countdigits(n);
	if (n < 0)
	{
		if (n == -2147483648)
			return (ft_strcpy(ft_strnew(11), "-2147483648"));
		if (!(s = ft_strnew(1 + len)))
			return ((char*)NULL);
		*s++ = '-';
		n *= -1;
	}
	else if (!(s = ft_strnew(len)))
		return ((char*)NULL);
	while (len--)
	{
		s[len] = '0' + (n % 10);
		n /= 10;
	}
	if (*(s - 1) == '-')
		return (s - 1);
	return (s);
}
