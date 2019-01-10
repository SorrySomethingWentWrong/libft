/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 17:12:27 by tramet            #+#    #+#             */
/*   Updated: 2018/12/14 17:12:29 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t			len;
	unsigned long	i;

	len = ft_strlen(dst);
	i = 0;
	while (src[i] && len < n)
		dst[len++] = src[i++];
	len < n ? dst[len] = '\0' : 0;
	return (len);
}
