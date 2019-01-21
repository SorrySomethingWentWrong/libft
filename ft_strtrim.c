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
	size_t		len;
	char		*trim;

	if (!s)
		return (ft_strnew(0));
	while (*s && ft_isblank(*s))
		s++;
	if (!*s)
		return ((char*)ft_memalloc(1));
	len = ft_strlen(s);
	while (ft_isblank(s[--len]))
		;
	len += 1;
	if (!(trim = ft_strsub(s, 0, len)))
		return ((char*)NULL);
	return (trim);
}
