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
	size_t		i;
	size_t		j;

	if (*needle)
	{
		i = 0;
		while (*haystack)
		{
			if (*haystack == *needle)
			{
				j = 0;
				while (needle[j] && haystack[j] == needle[j] && i + j < len)
					j++;
				if (!needle[j])
					return (haystack);
			}
			i++;
			haystack++;
		}
		return ((char*)NULL);
	}
	return (haystack);
}
