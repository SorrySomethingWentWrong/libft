/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 13:10:45 by tramet            #+#    #+#             */
/*   Updated: 2019/01/10 13:10:46 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_isascii(int c)
{
	if (c >= 0 && c < 128)
		return (c);
	return (0);
}
