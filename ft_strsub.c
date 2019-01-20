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

	if (!s || !(fs = ft_strnew(len)))
		return ((char*)NULL);
	i = 0;
	while (i < len)
	{
		fs[i++] = s[start++];
	}
	return (fs);
}
