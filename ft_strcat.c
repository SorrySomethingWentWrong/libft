/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 18:14:31 by tramet            #+#    #+#             */
/*   Updated: 2018/12/07 18:14:32 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcat(char *s1, const char *s2)
{
	char			*ptrs1;
	unsigned long	i;

	ptrs1 = &s1[ft_strlen(s1)];
	i = 0;
	while (s2[i])
		*(ptrs1++) = s2[i++];
	*(ptrs1) = s2[i];
	return (s1);
}
