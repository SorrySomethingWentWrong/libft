/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 17:29:46 by tramet            #+#    #+#             */
/*   Updated: 2019/01/12 17:29:47 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t			size;
	unsigned int	i;

	size = ft_strlen(s);
	i = 0;
	if (!s)
		return ;
	while (i < size)
		(*f)(i, s);
}
