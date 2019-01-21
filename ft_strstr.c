/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 17:57:26 by tramet            #+#    #+#             */
/*   Updated: 2018/12/07 17:57:27 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *haystack, const char *needle)
{
	size_t	j;

	if (*needle)
	{
		while (*haystack)
		{
			if (*haystack == *needle)
			{
				j = 0;
				while (needle[j] && haystack[j] == needle[j])
					j++;
				if (!needle[j])
					return (haystack);
			}
			haystack++;
		}
		return ((char*)NULL);
	}
	return (haystack);
}