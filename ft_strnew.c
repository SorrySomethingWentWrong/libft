/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 17:04:55 by tramet            #+#    #+#             */
/*   Updated: 2019/01/12 17:04:56 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;

	if (!size || !(s = (char*)ft_memalloc(sizeof(char) * (1 + size))))
		return ((char*)NULL);
	s[size] = 0x00;
	return (s);
}
