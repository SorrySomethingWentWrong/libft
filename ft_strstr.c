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

char	*strstr(const char *haystack, const char *needle)
{
	char			*first_occurence;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		first_occurence = (str + i);
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (first_occurence);
			j++;
		}
		i++;
	}
	return (0);
}
