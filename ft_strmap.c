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
	size_t		size;
	char		*fs;
	size_t		i;

	if (!s)
		return ((char*)NULL);
	i = 0;
	size = ft_strlen(s);
	fs = (char*)malloc(sizeof(char) * (size + 1));
	fs[--size] = '\0';
	while (i < size)
	{
		fs[i] = (*f)(s[i]);
		i++;
	}
	return (fs);
}
