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
	char			*first_occurence;
	unsigned long	i;
	unsigned long	j;

	i = 0;
	if (*needle)
	{
		while (haystack[i])
		{
			if (haystack[i] == *needle)
			{
				j = 1;
				first_occurence = haystack + i;
				while (needle[j] && first_occurence[j] == needle[j])
					j++;
				if (!first_occurence[j] && !needle[j])
					return (first_occurence);
			}
			i++;
		}
	}
	return (NULL);
}
