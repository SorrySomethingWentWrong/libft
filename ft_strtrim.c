/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 20:02:23 by tramet            #+#    #+#             */
/*   Updated: 2019/01/12 20:02:24 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char		*fs;
	size_t		size;
	size_t		i;

	if (!s)
		return ((char*)NULL);
	size = ft_strlen(s) - 1;
	i = 0;
	while (s[size] == ' ' || s[size] == '\n' || s[size] == '\t')
		size--;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (!(fs = (char*)malloc(sizeof(char) * (size + 1 - i))))
		return ((char*)NULL);
	fs[size - i] = '\0';
	s += i;
	i = 0;
	while (i < size)
	{
		fs[i] = s[i];
		i++;
	}
	return (fs);
}
