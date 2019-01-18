/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstostr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 03:13:23 by tramet            #+#    #+#             */
/*   Updated: 2019/01/17 03:13:25 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_lstostr(t_list *list)
{
	char		*str;
	size_t		len;

	len = ft_lstlen(list);
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return ((char*)NULL);
	str[len] = '\0';
	while (len)
	{
		str[--len] = *((char*)list->content);
		list = list->next;
	}
	return (str);
}
