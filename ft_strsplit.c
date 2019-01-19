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
** Recupere la longueur jusqu'au caractere de fin `end'
*/
size_t static		ft_strlenuntil(char const *s, char end)
{
	return (*s == end ? 0 : ft_strlenuntil(s + 1, end) + 1);
}

size_t static		ft_strcountpatern(unsigned char const *s, unsigned char end)
{
	size_t		len;

	len = 0;
	while(*s)
	{
		len++;
		while (*s && *s == end)
			s++;
		while (*s && *s != end)
			s++;
	}
	return (len);
}

char				**ft_strsplit(char const *s, char c)
{
	char		**tab;
	size_t		len;
	size_t		i;

	i = 0;
	if (!s || !(tab = (char**)ft_memalloc(ft_strcountpatern(
		(unsigned char const *)s, (unsigned char)c))))
		return ((char**)NULL);
	while(*s)
	{
		while (*s && *s == c)
			s++;
		len = ft_strlenuntil(s, c);
		if (!(tab[i++] = ft_memcpy((char*)ft_memalloc
			(1 + len), s, len)))
			return ((char**)NULL);
		s += len;
	}	
	return (tab);
}
