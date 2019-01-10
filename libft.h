/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tramet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 16:34:56 by tramet            #+#    #+#             */
/*   Updated: 2019/01/10 14:21:10 by tramet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list			t_list;
struct							s_list
{
	void			*content;
	size_t			content_size;
	t_list			*next;
};

typedef struct s_chained_link	t_chained_link;
struct							s_chained_link
{
	t_chained_link	*prev;
	void			*content;
	size_t			content_size;
	t_chained_link	*next;
};

typedef struct s_chained_list	t_chained_list;
struct							s_chained_list
{
	t_chained_link	*first;
	t_chained_link	*last;
	unsigned int	size;
};
/*
** The memset() function writes n bytes of value c (converted to an unsigned
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
void	*ft_memcpy(void *dst, const void *src, size_t n);
/*
** The memmove() function copies n bytes from string src to string dst.  The
** two strings may overlap; the copy is always done in a non-destructive manner.
*/
void	*ft_memmove(void *dst, const void *src, size_t n);
/*
** The memchr() function locates the first occurrence of c (converted to an
** unsigned char) in string s.
*/
void	*ft_memchr(const void *s, int c, size_t n);
/*
** The memcmp() function compares byte string s1 against byte string s2.
** Both strings are assumed to be n bytes long.
*/
int		ft_memcmp(const void *s1, const void *s2, size_t n);
/*
** The strlen() function computes the length of the string s (chars before '\0')
*/
size_t	ft_strlen(const char *s);
/*
** The strdup() function allocates sufficient memory for a copy of the string
** s1, does the copy, and returns a pointer to it.  The pointer may subsequently
** be used as an argument to the function free(3). If insufficient memory is
** available, NULL is returned and errno is set to ENOMEM.
*/
char	*ft_strdup(const char *s);
/*
** The strcpy() function copy the string src to dst (including the terminating
** `\0' character.) The source and destination strings should not overlap, as
** the behavior is undefined.
*/
char	*ft_strcpy(char *dest, const char *src);
/*
** The strncpy() function copy at most len characters from src into dst. If src
** is less than len characters long, the remainder of dst is filled with `\0'
** characters.  Otherwise, dst is not terminated. The source and destination
** strings should not overlap, as the behavior is undefined.
*/
char	*ft_strncpy(char *dest, const char *src, size_t n);
/*
** The strcat() function append a copy of the null-terminated string s2 to the
** end of the null-terminated string s1, then add a terminating `\0'.
** The string s1 must have sufficient space to hold the result.
*/
char	*ft_strcat(char *s1, const char *s2);
/*
** The strncat() function appends not more than n characters from s2, and then
** adds a terminating `\0', and works same as strcat if n > strlen(s2).
*/
char	*ft_strncat(char *s1, const char *s2, size_t n);
/*
** The strlcat() function concatenate strings is designed to be safer, more
** consistent, and less error prone replacements for strncpy(3) and strncat(3).
** Unlike those functions, strlcat() take the full size of the buffer (not just
** the length) and guarantee to NUL-ter- minate the result (as long as size is
** larger than 0 or, in the case of strlcat(), as long as there is at least one
** byte free in dst).  Note that a byte for the NUL should be included in size.
** Also note that strlcat() only operate on true ``C'' strings.  This means in
** strlcat() both src and dst must be NUL-terminated. The strlcat() function
** appends the NUL-terminated string src to the end of dst. It will append at
** most size - strlen(dst) - 1 bytes, NUL-terminating the result. The source and
** destination strings should not overlap, as the behavior is undefined.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t n);
/*
** The strchr() function locates the first occurrence of c (converted to a char)
** in the string pointed to by s.  The terminating null character is considered
** to be part of the string; therefore if c is `\0', the functions locate the
** terminating `\0'.
*/
char	*ft_strchr(char *s, int c);
/*
** The strrchr() function is identical to strchr(), except it locates the last
** occurrence of c.
*/
char	*ft_strrchr(char *s, int c);
/*
** The strstr() function locates the first occurrence of the null-terminated
** string needle in the null-terminated string haystack.
*/
char	*ft_strstr(char *haystack, const char *needle);
/*
** The strnstr() function locates the first occurrence of the null-terminated
** string needle in the string haystack, where not more than len characters are
** searched.
** Characters that appear after a `\0' character are not searched.  Since the
** strnstr() function is a FreeBSD specific API, it should only be used when
** portability is not a concern.
*/
char	*ft_strnstr(char *haystack, const char *needle, size_t len);
/*
** The strcmp() function compares the two strings s1 and s2.  It returns
** an integer less than, equal to, or greater than zero if s1 is found,
** respectively, to be less than, to match, or be greater than s2.
*/
int		ft_strcmp(const char *s1, const char *s2);
/*
** he strncmp() function is similar, except it compares only the first (at most)
** n bytes of s1 and s2.
** The strcmp() and strncmp() functions return an integer less
** than, equal to, or greater than zero if s1 (or the first n bytes thereof)
** is found, respectively, to be less than, to match, or be greater than s2.
*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);
/*
** The atoi() function converts the initial portion of the string pointed to by
** str to int representation.
*/
int		ft_atoi(const char *str);
/*
** Checks for an alphabetic character; in the standard "C" locale, it is
** equivalent to (isupper(c) || islower(c)). In some locales, there may be
** additional charactersfor which isalpha() is true---letters which are neither
** upper case nor lower case.
*/
int		ft_isalpha(int c);
/*
** Checks for a digit (0 through 9).
*/
int		ft_isdigit(int c);
/*
** Checks for an alphanumeric character
** it is equivalent to (isalpha(c) || isdigit(c)).
*/
int		ft_isalnum(int c);
/*
** checks whether c is a 7-bit unsigned char value that fits into the ASCII
** character set.
*/
int		ft_isascii(int c);
/*
** checks for any printable character including space.
*/
int		ft_isprint(int c);
/*
** toupper() converts the letter c to upper case, if possible. If c is not an
** unsigned char value, or EOF, the behavior of these functions is undefined.
** The value returned is that of the converted letter, or c if the conversion
** was not possible.
*/
int		ft_toupper(int c);
/*
** tolower() converts the letter c to lower case, if possible. If c is not an
** unsigned char value, or EOF, the behavior of these functions is undefined.
** The value returned is that of the converted letter, or c if the conversion
** was not possible.
*/
int		ft_tolower(int c);
/*
** Checks for a lower-case character.
*/
int		ft_islower(int c);
/*
** Checks for a uppercase character.
*/
int		ft_isupper(int c);
/*
** strcapitalize() Capitalise the text to make it respect case rules.
*/
char	*ft_strcapitalize(char *str);
/*
** write in fd 1 the char passed.
*/
void	ft_putchar(char c);
#endif