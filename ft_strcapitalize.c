/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 18:16:44 by tramet            #+#    #+#             */
/*   Updated: 2018/09/16 23:42:57 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcapitalize(char *str)
{
	char	*s;

	s = str;
	while (*s != '\0')
	{
		while (!ft_isprint((int)*s))
			s++;
		if (ft_islower((int)*s))
			*s -= 32;
		while (ft_isalnum((int)*(++s)))
			if (ft_isupper((int)*s))
				*s += 32;
		while (*s && !ft_isalnum((int)*s) && ft_isprint((int)*s))
			s++;
	}
	return (str);
}
