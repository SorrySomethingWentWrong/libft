/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbinary_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 08:29:37 by tramet            #+#    #+#             */
/*   Updated: 2019/01/18 08:29:39 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putbinary_fd(void *toprint, size_t len, int fd)
{
	size_t				byte_size;
	unsigned char		mask;

	if (!len)
		return ;
	byte_size = 8;
	mask = 0x80;
	while (byte_size--)
	{
		if (mask & *((unsigned char*)toprint))
			ft_putchar_fd('1', 1);
		else
			ft_putchar_fd('0', 1);
		mask >>= 1;
	}
	ft_putbinary_fd((void*)(((unsigned char*)toprint) + 1), --len, fd);
}
