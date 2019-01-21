/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 18:00:35 by tramet            #+#    #+#             */
/*   Updated: 2018/12/07 18:06:58 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (!n)
		return (0);
	i = 0;
	while (*(unsigned char*)s1 && *(unsigned char*)s2 &&
		*(unsigned char*)s1 == *(unsigned char*)s2 && i < n)
	{
		s1++;
		s2++;
		i++;
	}
	if (i != n)
		return ((*(unsigned char*)s1 - *(unsigned char*)s2));
	return (0);
}
