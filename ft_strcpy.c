/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 17:52:52 by tramet            #+#    #+#             */
/*   Updated: 2018/12/07 17:52:53 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dst, const char *src)
{
	char	*res;

	res = dst;
	while (*src)
	{
		*(unsigned char*)dst++ = *(unsigned char*)src++;
	}
	*dst = '\0';
	return (res);
}
