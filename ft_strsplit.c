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

/*
** Recupere la longueur jusqu'au caractere `c'
*/
size_t static		ft_strlenuntil(char const *s, char c)
{
	size_t		len;

	len = 0;
	while (*s && *s++ != c)
		len++;
	return (len);
}

/*
** Recupere la longueur jusqu'a un caractere different de `c'
*/
size_t static		ft_strlenof(char const *s, char c)
{
	size_t		len;

	len = 0;
	while (*s && *s++ == c)
		len++;
	return (len);
}

char				**ft_strsplit(char const *s, char c)
{
	char		**tab;
	size_t		len;
	size_t		i;

	if (!s || !(tab = ft_memalloc(ft_strlen(s) / 2 + 2)))
		return ((char**)NULL);
	i = 0;
	while(*s)
	{
		s += ft_strlenof(s, c);
		if (*s)
		{
			len = ft_strlenuntil(s, c);
			if (!(tab[i++] = ft_strsub(s, 0, len)))
				return ((char**)NULL);
			s+= len;
		}
	}
	return (tab);
}
