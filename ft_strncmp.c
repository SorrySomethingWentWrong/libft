/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 18:00:35 by tramet            #+#    #+#             */
/*   Updated: 2018/12/07 18:06:58 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i;
	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i == n)
		return (0);
	if (s1[i])
		return (s1[i]);
	if (s2[i])
		return (-s2[i]);
	return (0);
}
