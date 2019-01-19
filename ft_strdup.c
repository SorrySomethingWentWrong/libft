/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 01:29:31 by tramet            #+#    #+#             */
/*   Updated: 2018/12/13 01:29:32 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s)
{
	unsigned long	len;
	char			*dup;

	len = ft_strlen(s) + 1;
	dup = (char*)malloc(sizeof(*s) * len);
	if (!dup)
		return (NULL);
	dup[len] = '\0';
	while (--len)
		dup[len] = s[len];
	return (dup);
}
