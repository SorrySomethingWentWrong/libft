/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 22:02:53 by tramet            #+#    #+#             */
/*   Updated: 2019/01/12 22:03:00 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				**ft_strsplit(char const *s, char c)
{
	char		**tab;
	size_t		len;
	size_t		i;

	if (!s || !(tab = ft_memalloc(ft_strlen(s) / 2 + 2)))
		return ((char**)NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			len = 0;
			while (*s && s[len] != c)
				len++;
			if (!(tab[i++] = ft_strsub(s, 0, len)))
				return ((char**)NULL);
			s += len;
		}
	}
	return (tab);
}
