/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 17:55:58 by tramet            #+#    #+#             */
/*   Updated: 2018/12/07 17:56:00 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//ceci est faut
char	*strncpy(char * dst, const char * src, size_t len)
{
	unsigned int		i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (dest[i])
	{
		dest[i] = '\0';
		while (dest[++i])
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}
