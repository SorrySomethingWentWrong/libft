/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 00:38:25 by tramet            #+#    #+#             */
/*   Updated: 2018/12/07 00:38:37 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int static	anumtoi(char const *str, int neg)
{
	unsigned int	i;
	unsigned int	result;

	i = 0;
	result = 0;
	while (*str && *str >= '0' && *str <= '9' && i++ != 12)
	{
		result *= 10;
		result += *(str++) - '0';
	}
	if ((result & 0x80000000) && (neg ? 
		(!(result ^ 0x80000000) ?
			(neg *= result) : neg++) : --neg))
		return (neg);
	return (neg ? neg  * result : result);
}

int			ft_atoi(const char *str)
{
	int			neg;

	neg = 0;
	while (((!(*str & 0xf0) && *str ^ 0xf7) || *str == ' ')
		&& *str)
		str++;
	if ((*str == '-' ? --neg : 0) || *str == '+')
		str++;
	return (anumtoi(str, neg));
}
