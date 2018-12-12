/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 04:17:05 by tramet            #+#    #+#             */
/*   Updated: 2018/12/10 04:17:06 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	i;
	char			*byte_src;
	char			*byte_dst;

	i = 0;
	byte_src = (char*) src;
	byte_dst = (char*) dst;
	while (n && c == (int) byte_src[i])
		byte_dst[i] = byte_src[i++];
	byte_dst[i] = byte_src[i++];
	return (dst + i);
}
