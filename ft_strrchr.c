/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 20:58:31 by tramet            #+#    #+#             */
/*   Updated: 2018/12/14 20:58:40 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(char *s, int c)
{
	char	*d;

	d = s + ft_strlen(s);
	if (*d == (char)c)
		return (d);
	while (s < d--)
	{
		if (*d == (char)c)
			return (d);
	}
	return (NULL);
}
