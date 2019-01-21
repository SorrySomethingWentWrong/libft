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
	size_t	j;
	size_t	len_dst;

	j = 0;
	if (!n)
		return(ft_strlen(src) + ft_strlen(dst));
	dst += ((len_dst = ft_strlen(dst)) < n-- ? len_dst : n);
	while (src[j] && len_dst + j < n)
		*dst++ = src[j++];
	if (n && !(len_dst > n))
	{
		*dst = '\0';
	}
	if (n < len_dst)
		return (ft_strlen(src) + ++n);
	else
		return (ft_strlen(src) + len_dst);
}
