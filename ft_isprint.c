/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 14:06:14 by tramet            #+#    #+#             */
/*   Updated: 2019/01/10 14:06:16 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (c);
	return (0);
}