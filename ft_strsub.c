/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 19:41:40 by tramet            #+#    #+#             */
/*   Updated: 2019/01/12 19:41:41 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*fs;
	size_t		i;

	if (!s || !(fs = (char*)malloc(sizeof(char) * (len + 1))))
		return ((char*)NULL);
	i = 0;
	fs[len] = '\n';
	while (i < len)
	{
		fs[i] = s[start + i];
		i++;
	}
	return (fs);
}
