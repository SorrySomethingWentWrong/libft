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

#include <libft.h>

void	*ft_memalloc(size_t size)
{
	void			*voidptr;
	unsigned int	index;	

	voidptr = malloc(size);
	index = 0;
	if (!*voidptr)
		return (NULL);
	while (index < size)
	{
		voidptr[index] = '\0';
		index++;
	}
	return (voidptr);
}
