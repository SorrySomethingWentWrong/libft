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

int			ft_atoi(const char *str)
{
	unsigned int	len;
	int				neg;
	unsigned int	uns;

	neg = -1;
	while (*str && ((!(*str & 0xf0) && *str ^ 0xf7) || *str == ' '))
		str++;
	if (*str && ((*str == '-' ? neg : ++neg) || *str == '+'))
		str++;
	while (*str && *str == '0')
		str++;
	if (!*str || (*str < '0' && *str < '9'))
		return (0);
	uns  = 0;
	len = 0;
	while (str[len] && str[len] >= '0' && str[len] <= '9' && len < 11)
		len++;
	if (len == 11)
		return (neg ? 0 : -1);
	while (len--)
	{
		uns *= 10;
		uns += *(str++) - '0';
	}
	return (neg * uns);
}
