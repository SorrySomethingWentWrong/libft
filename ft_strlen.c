/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 16:29:32 by tramet            #+#    #+#             */
/*   Updated: 2018/12/07 16:29:35 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		recunslen(unsigned char const *s)
{
	if (*s)
		return (1 + recunslen(++s));
	return (0);
}

size_t		ft_strlen(const char *s)
{
	return (recunslen((unsigned char const *)s));
}
