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
	size_t			len;
	char			*dup;

	if (!(dup = ft_strnew(len = ft_strlen(s))) && len)
		return (NULL);
	if (dup)
	{
		while (len--)
			dup[len] = s[len];
		return (dup);
	}
	return ((char*)ft_memalloc(sizeof(char)));
}
