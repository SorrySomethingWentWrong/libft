/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 17:34:10 by tramet            #+#    #+#             */
/*   Updated: 2018/09/12 18:08:07 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	if (*str == '\0')
		return (str);
	if (*str >= 'a' && *str <= 'z')
		*str -= 32;
	ft_strupcase(str + 1);
	return (str);
}