/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 19:25:34 by tramet            #+#    #+#             */
/*   Updated: 2019/01/12 19:25:35 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strequ(char const *s1, char const *s2)
{
	if (!s1 || !s2)
	{
		if (s1)
			return (0);
		if (s2)
			return (0);
		return (1);
	}
	while (*s1 || *s2)
	{
		if (*(s1++) != *(s2++))
			return (0);
	}
	if (*s1 != *s2)
		return (0);
	return (1);
}
