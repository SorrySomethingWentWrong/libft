/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newlink.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 04:39:59 by tramet            #+#    #+#             */
/*   Updated: 2019/01/14 04:40:00 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_link		*ft_newlink(void *content, size_t ctnt_size)
{
	t_link		*node;

	if (!content || !ctnt_size || (node = (t_link*)malloc(sizeof(t_link))))
		return ((t_link*)NULL);
	node->content = content;
	node->ctnt_size = ctnt_size;
	node->next = (t_link*)NULL;
	node->prev = (t_link*)NULL;
	return (node);
}
