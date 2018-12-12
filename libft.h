/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 16:34:56 by tramet            #+#    #+#             */
/*   Updated: 2018/12/07 16:34:58 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
#include <unistd.h>
#include <stdlib.h>


typedef struct	s_list				t_list;
struct			s_list
{
	void		*content;
	size_t		content_size;
	t_list		*next;
};

typedef struct	s_chained_link		t_chained_link;
struct			s_chained_link
{
	t_chained_link	*prev;
	void			*content;
	size_t			content_size;
	t_chained_link	*next;
};

typedef struct	s_chained_list		t_chained_list;
struct			s_chained_list
{
	t_chained_link	*first;
	t_chained_link	*last;
	unsigned int	size;
};

/*
** The memset() function writes len bytes of value c (converted to an unsigned
** char) to the string s.
*/
void	*ft_memset(void *s, int c, size_t n);

/*
** The bzero() function writes n zeroed bytes to the string s.  If n is zero,
** bzero() does nothing.
*/
void	ft_bzero(void *s, size_t n);

/*
** The memcpy() function copies n bytes from memory area src to memory area dst.
** If dst and src overlap, behavior is undefined.  Applications in which dst and
** src might overlap should use memmove(3) instead.
*/
void		*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

//memccpy
//memmove
//memchr
//memcmp
//strlen
//strdup
//strcpy
//strncpy
//strcat
//strncat
//strlcat
//strchr
//strrchr
//strstr
//strnstr
//strcmp
//strncmp

/*
** The atoi() function converts the initial portion of the string pointed to by
** str to int representation.
*/
int		ft_atoi(const char *str);

//isalpha
//isdigit
//isalnum
//isascii
//isprint
//toupper
//tolower

#endif
