/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 19:52:19 by tramet            #+#    #+#             */
/*   Updated: 2019/01/12 19:52:20 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		s1size;
	size_t		s2size;
	char		*fs;

	if (!s1 || !s2)
		return ((char*)NULL);
	s1size = ft_strlen(s1);
	s2size = ft_strlen(s2);
	if (!(fs = (char*)malloc(sizeof(char) * (s1size + s2size + 1))))
		return ((char*)NULL);
	fs[s1size + s2size] = '\0';
	while (s2size--)
		fs[s1size + s2size] = s2[s2size];
	while (s1size--)
		fs[s1size] = s1[s1size];
	return (fs);
}
