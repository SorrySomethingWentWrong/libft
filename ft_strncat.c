/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 18:16:09 by tramet            #+#    #+#             */
/*   Updated: 2018/12/07 18:16:10 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	unsigned int	i;
	char			*ptrdest;

	i = 0;
	ptrdest = dest;
	while (ptrdest[i] != '\0')
		i++;
	while (nb > 0)
	{
		ptrdest[i] = *(src)++;
		i++;
		nb--;
	}
	ptrdest[i] = '\0';
	return (dest);
}
