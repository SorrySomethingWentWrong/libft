/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 00:22:49 by tramet            #+#    #+#             */
/*   Updated: 2019/01/14 00:22:54 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*node;

	if (!(node = (t_list*)malloc(sizeof(t_list))))
		return ((t_list*)NULL);
	if (content)
	{
		if (!(node->content = malloc(content_size)))
			return ((t_list*)NULL);
		ft_memcpy(node->content, content, content_size);
		node->content_size = content_size;
	}
	else
	{
		node->content = NULL;
		node->content_size = (size_t)0;
	}
	node->next = (t_list*)NULL;
	return (node);
}
