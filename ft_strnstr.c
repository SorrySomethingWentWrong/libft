/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 21:53:44 by tramet            #+#    #+#             */
/*   Updated: 2018/12/14 21:53:46 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(char *haystack, const char *needle, size_t len)
{
	char			*first_occ;
	unsigned long	i;
	unsigned long	j;

	i = 0;
	if (*needle)
	{
		while (i < len && haystack[i])
		{
			if (haystack[i] == *needle)
			{
				j = 1;
				first_occ = haystack + i;
				while (i + j < len && needle[j] && first_occ[j] &&
					first_occ[j] == needle[j])
					j++;
				if (!needle[j])
					return (first_occ);
			}
			i++;
		}
	}
	return (NULL);
}
