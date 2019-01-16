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
size_t		lenuntil(char *s, char end)
{
	return (*s == end ? 0 : lenuntil(s + 1, end) + 1);
}

/*
** Transforme une list chainee en tableau a deux dimentions.
*/
char		**ltotab(t_list const *list)
{
	size_t		len;
	char		**tab;

	len = ft_lstlen(list);
	if (!(tab = (char**)malloc(sizeof(char*) * (len + 1))))
		return ((char***)NULL);
	tab[len] = (char*)NULL;
	while (len)
	{
		tab[--len] = list->content;
		list = list->next;
	}
	return (tab);
}

char		**ft_strsplit(char const *s, char c)
{
	char		**tab;
	char		*slice;
	size_t		line;
	size_t		i;
	size_t		len;
	t_list		*list;

	if (!s)
		return ((char**)NULL);
	i = 0;
	line = 0;
	list = NULL;
	while (s && s[i] != c)
		i++;
	while (s)
	{
		if (!(slice = (char*)malloc(sizeof(char) * (len = lenuntil(s + i, c) + 1
			))) || slice[len] = '\0' || !(ft_memcpy((void*)slice, (void*)(s + i)
			, len)) ||  line++)
			return ((char**)NULL);
		while (s && s[i] != c)
			i++;
	}
	tab = ltotab(list);
	return ((tab[line] = (char*)NULL) ? NULL : tab);
}
