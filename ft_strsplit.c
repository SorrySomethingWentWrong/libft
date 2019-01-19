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

void static			dontdelcontent(void *content, size_t cnt_size)
{
	if (!content)
		cnt_size = 0;
}

char static			**rtrntab_free_lst(t_list **list)
{
	char		**tab;
	void		(*f)(void *, size_t);

	f = &dontdelcontent;
	if (!(tab = ft_lstostrtab(*list)))
		return ((char**)NULL);
	ft_lstdel(list, f);
	return (tab);
}

char				**ft_strsplit(char const *s, char c)
{
	char		*slice;
	size_t		i;
	size_t		len;
	t_list		*list;

	if (!s)
		return ((char**)NULL);
	i = 0;
	list = NULL;
	while (s)
	{
		while (s && s[i] != c)
			i++;
		if (s)
		{
			if (!(slice = (char*)malloc(sizeof(char) * (len = ft_strlenuntil
				(s + i, c) + 1))) || (slice[len] = '\0') || !(ft_memcpy
				((void*)slice, (void*)(s + i), len)))
				return ((char**)NULL);
			ft_lstadd(&list,ft_lstnew((void const*)slice,len));
		}
	}
	return (rtrntab_free_lst(&list));
}
