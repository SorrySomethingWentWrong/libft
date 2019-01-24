/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 17:33:54 by tramet            #+#    #+#             */
/*   Updated: 2019/01/12 17:33:57 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char		*map;
	size_t		i;

	if (s)
	{
		if (!(map = ft_strnew(ft_strlen(s))))
			return ((char*)NULL);
		i = 0;
		while (*s)
			map[i++] = (*f)(*s++);
		return (map);
	}
	return ((char*)NULL);
}
