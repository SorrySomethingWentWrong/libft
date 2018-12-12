/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 18:18:05 by tramet            #+#    #+#             */
/*   Updated: 2018/12/07 18:18:09 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t		strlcpy(char * restrict dst, const char * restrict src, size_t size)
{
	unsigned int	i;

	i = 0;
	while (--size && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (ft_strlen(src));
}
