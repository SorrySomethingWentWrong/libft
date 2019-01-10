/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 18:16:09 by tramet            #+#    #+#             */
/*   Updated: 2018/12/07 18:16:10 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	unsigned long	i;
	char			*ptrdest;

	i = 0;
	ptrdest = &s1[ft_strlen(s1)];
	if (n)
	{
		while (s2[i] && --n)
			*(ptrdest++) = s2[i++];
		*(ptrdest) = '\0';
	}
	return (s1);
}
