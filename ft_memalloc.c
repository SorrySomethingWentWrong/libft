/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 16:43:45 by tramet            #+#    #+#             */
/*   Updated: 2018/12/07 16:43:48 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char			*byteptr;
	unsigned int	index;

	byteptr = (char*)malloc(sizeof(char) * size);
	index = 0;
	if (byteptr)
		return (NULL);
	while (index < size)
	{
		byteptr[index] = '\0';
		index++;
	}
	return ((void*)byteptr);
}
