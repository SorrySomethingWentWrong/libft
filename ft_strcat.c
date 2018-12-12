/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 18:14:31 by tramet            #+#    #+#             */
/*   Updated: 2018/12/07 18:14:32 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strcat(char *restrict s1, const char *restrict s2)
{
	char			*ptrdest;

	ptrdest = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptrdest);
}
