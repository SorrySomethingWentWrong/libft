/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 18:00:50 by tramet            #+#    #+#             */
/*   Updated: 2019/01/12 18:00:51 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*map;
	size_t		i;

	if (s)
	{
		if (!(map = ft_strnew(ft_strlen(s))))
			return ((char*)NULL);
		i = 0;
		while (*s)
		{
			map[i] = (*f)(i, *s++);
			i++;
		}
		return (map);
	}
	return ((char*)NULL);
}
