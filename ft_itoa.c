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

t_list static	*uitolst(t_list *charlist, unsigned int n)
{
	char		c;

	if (n)
	{
		charlist = uitolst(charlist, n / 10);
		c = '0' + n % 10;
		ft_lstadd(&charlist, ft_lstnew((void*)&c, 1));
	}
	return (charlist);
}

char			*ft_itoa(int n)
{
	t_list		*charlist;
	char		c;

	charlist = (t_list*)NULL;
	c = '-';
	if (n >> (sizeof(int) - 1))
	{
		charlist = ft_lstnew((void*)&c, 1);
		if (n == -2147483648)
			return ("-2147483648");
		n = -n;
	}
	return (ft_lstostr(ft_lstreverse(uitolst(charlist, n))));
}
