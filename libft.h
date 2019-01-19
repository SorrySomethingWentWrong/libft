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

typedef struct s_list	t_list;
struct					s_list
{
	void				*content;
	size_t				content_size;
	t_list				*next;
};

/*
** ######################### Personal structures start #########################
*/
/*
** Creation of nodes for dual chained list
*/
typedef struct s_link	t_link;
struct					s_link
{
	void				*content;
	size_t				ctnt_size;
	t_link				*next;
	t_link				*prev;
};

/*
** Creation of dual chained list handler
*/
typedef struct s_chlist	t_chlist;
struct					s_chlist
{
	t_link				*first;
	t_link				*last;
	size_t				lst_size;
};
/*
** ########################## Personal structures end ##########################
*/

/*
** The memset() function writes n bytes of value c (converted to an unsigned
** char) to the string s.
*/
void					*ft_memset(void *s, int c, size_t n);
/*
** The bzero() function writes n zeroed bytes to the string s.  If n is zero,
** bzero() does nothing.
*/
void					ft_bzero(void *s, size_t n);
/*
** The memcpy() function copies n bytes from memory area src to memory area dst.
** If dst and src overlap, behavior is undefined.  Applications in which dst and
** src might overlap should use memmove(3) instead.
*/
void					*ft_memcpy(void *dst, const void *src, size_t n);
/*
** The ft_memccpy() function copies bytes from string src to string dst.  If
** the character c (as converted to an unsigned char) occurs in the string
** src, the copy stops and a pointer to the byte after the copy of c in the
** string dst is returned.  Otherwise, n bytes are copied, and a NULL
** pointer is returned.
*/
void					*ft_memccpy(void *dst, const void *src, int c,
	size_t n);
/*
** The memmove() function copies n bytes from string src to string dst.  The
** two strings may overlap; the copy is always done in a non-destructive manner.
*/
void					*ft_memmove(void *dst, const void *src, size_t n);
/*
** The memchr() function locates the first occurrence of c (converted to an
** unsigned char) in string s.
*/
void					*ft_memchr(const void *s, int c, size_t n);
/*
** The memcmp() function compares byte string s1 against byte string s2.
** Both strings are assumed to be n bytes long.
*/
int						ft_memcmp(const void *s1, const void *s2, size_t n);
/*
** The strlen() function computes the length of the string s (chars before '\0')
*/
size_t					ft_strlen(const char *s);
/*
** The strdup() function allocates sufficient memory for a copy of the string
** s1, does the copy, and returns a pointer to it.  The pointer may subsequently
** be used as an argument to the function free(3). If insufficient memory is
** available, NULL is returned and errno is set to ENOMEM.
*/
char					*ft_strdup(const char *s);
/*
** The strcpy() function copy the string src to dst (including the terminating
** `\0' character.) The source and destination strings should not overlap, as
** the behavior is undefined.
*/
char					*ft_strcpy(char *dst, const char *src);
/*
** The strncpy() function copy at most len characters from src into dst. If src
** is less than len characters long, the remainder of dst is filled with `\0'
** characters.  Otherwise, dst is not terminated. The source and destination
** strings should not overlap, as the behavior is undefined.
*/
char					*ft_strncpy(char *dst, const char *src, size_t n);
/*
** The strlcpy() and strlcat() functions copy and concatenate strings
** respectively.  They are designed to be safer, more consistent, and less
** error prone replacements for strncpy(3) and strncat(3).  Unlike those
** functions, strlcpy() and strlcat() take the full size of the buffer (not
** just the length) and guarantee to NUL-terminate the result (as long as
** size is larger than 0 or, in the case of strlcat(), as long as there is
** at least one byte free in dst).  Note that a byte for the NUL should be
** included in size.  Also note that strlcpy() and strlcat() only operate on
** true ``C'' strings.  This means that for strlcpy() src must be NUL-termi-
** nated and for strlcat() both src and dst must be NUL-terminated.
*/
size_t					ft_strlcpy(char *dst, const char *src, size_t size);
/*
** The strcat() function append a copy of the null-terminated string s2 to the
** end of the null-terminated string s1, then add a terminating `\0'.
** The string s1 must have sufficient space to hold the result.
*/
char					*ft_strcat(char *s1, const char *s2);
/*
** The strncat() function appends not more than n characters from s2, and then
** adds a terminating `\0', and works same as strcat if n > strlen(s2).
*/
char					*ft_strncat(char *s1, const char *s2, size_t n);
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
size_t					ft_strlcat(char *dst, const char *src, size_t n);
/*
** The strchr() function locates the first occurrence of c (converted to a char)
** in the string pointed to by s.  The terminating null character is considered
** to be part of the string; therefore if c is `\0', the functions locate the
** terminating `\0'.
*/
char					*ft_strchr(char *s, int c);
/*
** The strrchr() function is identical to strchr(), except it locates the last
** occurrence of c.
*/
char					*ft_strrchr(char *s, int c);
/*
** The strstr() function locates the first occurrence of the null-terminated
** string needle in the null-terminated string haystack.
*/
char					*ft_strstr(char *haystack, const char *needle);
/*
** The strnstr() function locates the first occurrence of the null-terminated
** string needle in the string haystack, where not more than len characters are
** searched.
** Characters that appear after a `\0' character are not searched.  Since the
** strnstr() function is a FreeBSD specific API, it should only be used when
** portability is not a concern.
*/
char					*ft_strnstr(char *haystack, const char *needle,
	size_t len);
/*
** The strcmp() function compares the two strings s1 and s2.  It returns
** an integer less than, equal to, or greater than zero if s1 is found,
** respectively, to be less than, to match, or be greater than s2.
*/
int						ft_strcmp(const char *s1, const char *s2);
/*
** he strncmp() function is similar, except it compares only the first (at most)
** n bytes of s1 and s2.
** The strcmp() and strncmp() functions return an integer less
** than, equal to, or greater than zero if s1 (or the first n bytes thereof)
** is found, respectively, to be less than, to match, or be greater than s2.
*/
int						ft_strncmp(const char *s1, const char *s2, size_t n);
/*
** Alloue (avec malloc(3)) et retourne une copie de la chaîne passée en
** paramètre sans les espaces blancs au debut et à la fin de cette chaîne.
** On considère comme espaces blancs les caractères ’ ’, ’\n’ et ’\t’.
** Si s ne contient pas d’espaces blancs au début ou à la fin, la fonction
** renvoie une copie de s. Si l’allocation echoue, la fonction renvoie NULL.
*/
char					*ft_strtrim(char const *s);
/*
** The atoi() function converts the initial portion of the string pointed to by
** str to int representation.
*/
int						ft_atoi(const char *str);
/*
** Checks for an alphabetic character; in the standard "C" locale, it is
** equivalent to (isupper(c) || islower(c)). In some locales, there may be
** additional charactersfor which isalpha() is true---letters which are neither
** upper case nor lower case.
*/
int						ft_isalpha(int c);
/*
** Checks for a digit (0 through 9).
*/
int						ft_isdigit(int c);
/*
** Checks for an alphanumeric character
** it is equivalent to (isalpha(c) || isdigit(c)).
*/
int						ft_isalnum(int c);
/*
** checks whether c is a 7-bit unsigned char value that fits into the ASCII
** character set.
*/
int						ft_isascii(int c);
/*
** checks for any printable character including space.
*/
int						ft_isprint(int c);
/*
** toupper() converts the letter c to upper case, if possible. If c is not an
** unsigned char value, or EOF, the behavior of these functions is undefined.
** The value returned is that of the converted letter, or c if the conversion
** was not possible.
*/
int						ft_toupper(int c);
/*
** tolower() converts the letter c to lower case, if possible. If c is not an
** unsigned char value, or EOF, the behavior of these functions is undefined.
** The value returned is that of the converted letter, or c if the conversion
** was not possible.
*/
int						ft_tolower(int c);
/*
** Checks for a lower-case character.
*/
int						ft_islower(int c);
/*
** Checks for a uppercase character.
*/
int						ft_isupper(int c);
/*
** strcapitalize() Capitalise the text to make it respect case rules.
*/
char					*ft_strcapitalize(char *str);
/*
** write in fd 1 the char passed.
*/
void					ft_putchar(char c);

/*
** The ft_memalloc() function allocates size bytes and returns a pointer the
** allocated memory.  The memory is not initialized.  If size is 0, then
** ft_memalloc() returns either NULL, or a unique pointer value that can later
** be successfully passed to ft_memdel().
*/
void					*ft_memalloc(size_t size);
/*
** The ft_memdel() function frees the memory space pointed to by ptr, which must
** have been returned by a previous call to ft_memalloc(). Otherwise, or if
** ft_memdel(ptr) has already been called before, undefined behavior occurs.
** If ptr is NULL, no operation is performed.
*/
void					ft_memdel(void **ap);
/*
** To complete
*/
char					*ft_strnew(size_t size);
/*
** To complete
*/
void					ft_strdel(char **as);
/*
** To complete
*/
void					ft_strclr(char *s);
/*
** To complete
*/
void					ft_striter(char *s, void (*f)(char *));
/*
** To complete
*/
void					ft_striteri(char *s, void (*f)(unsigned int, char *));
/*
** The ft_strmap() function apply `*f' fonction to any characters of `s' chain,
** and save if to a "fresh" character chain with the same size than `s' that has
** been allowed with `maclloc(3)'. Returns fresh chain or NULL if `s' is NULL.
*/
char					*ft_strmap(char const *s, char (*f)(char));
/*
** The ft_strmapi() function apply `*f' to any characters of `s' whith index,
** and save if to a "fresh" character chain with the same size than `s' that has
** been allowed with `maclloc(3)'. Returns fresh chain or NULL if `s' is NULL.
*/
char					*ft_strmapi(char const *s,
	char (*f)(unsigned int, char));
/*
** To complete
*/
int						ft_strequ(char const *s1, char const *s2);
/*
** To complete
*/
int						ft_strnequ(char const *s1, char const *s2, size_t n);
/*
** To complete
*/
char					*ft_strsub(char const *s, unsigned int start,
	size_t len);
/*
** To complete
*/
char					*ft_strjoin(char const *s1, char const *s2);
/*
** To complete
*/
char					**ft_strsplit(char const *s, char c);
/*
** Returns the string version of the numder n.
*/
char					*ft_itoa(int n);
/*
** Writes the char c in file descriptor `fd'.
*/
void					ft_putchar_fd(char c, int fd);
/*
** Same as ft_putchar_fd() in file descriptor 1.
*/
void					ft_putchar(char c);
/*
** Writes the string s in file descriptor `fd'.
*/
void					ft_putstr_fd(char const *s, int fd);
/*
** Same as ft_putstr_fd() in file descriptor 1.
*/
void					ft_putstr(char const *s);
/*
** Writes '\n' in file descriptor `fd'.
*/
void					ft_putendl_fd(char const *s, int fd);
/*
** Same as ft_putendl_fd() in file descriptor 1.
*/
void					ft_putendl(char const *s);
/*
** write the number `n' in file descriptor `fd'.
*/
void					ft_putnbr_fd(int n, int fd);
/*
** Same as ft_putnbr_fd() in file descriptor 1.
*/
void					ft_putnbr(int n);

/*
** Alloue (avec malloc(3)) et retourne un maillon “frais”. Les champs content et
** content_size du nouveau maillon sont initialisés par copie des paramètres
** de la fonction. Si le paramètre content est nul, le champs content est
** initialisé à NULL et le champs content_size est initialisé à 0 quelque
** soit la valeur du paramètre content_size. Le champ next est initialisé à
** NULL. Si l’allocation échoue, la fonction renvoie NULL.
** Returns new node, NULL if malloc(3) failed.
*/
t_list					*ft_lstnew(void const *content, size_t content_size);

/*
** Prend en paramètre l’adresse d’un pointeur sur un maillon et libère la
** mémoire du contenu de ce maillon avec la fonction del passée en paramètre
** puis libère la mémoire du maillon en lui même avec free(3). La mémoire du
** champ next ne doit en aucun cas être libérée. Pour terminer, le pointeur
** sur le maillon maintenant libéré doit être mis à NULL (de manière
** similaire à la fonction ft_memdel de la partie obligatoire). Use free(3)
*/
void					ft_lstdelone(t_list **alst, void(*del)(void *, size_t));

/*
** Prend en paramètre l’adresse d’un pointeur sur un maillon et libère la
** mémoire de ce maillon et celle de tous ses succes- seurs l’un après l’autre
** avec del et free(3). Pour terminer, le pointeur sur le premier maillon
** maintenant libéré doit être mis à NULL (de manière similaire à la
** fonction ft_memdel de la partie obligatoire). Use free(3).
*/
void					ft_lstdel(t_list **alst, void(*del)(void*, size_t));

/*
** Ajoute l’élément new en tête de la liste.
** L’adresse d’un pointeur sur le premier maillon d’une liste.
** Le maillon à ajouter en tête de cette liste.
** Retour
** Rien.
** Aucune.
*/
void					ft_lstadd(t_list **alst, t_list *new);

/*
** Parcourt la liste lst en appliquant à chaque maillon la fonc- tion f.
** Pointeur sur le premier maillon d’une liste.
** L’adresse d’une fonction à laquelle appliquer chaque maillon de la liste.
** Retour
** Rien.
** Aucune.
*/
void					ft_lstiter(t_list *lst, void (*f)(t_list *elem));
/*
** Parcourt la liste lst en appliquant à chaque maillon la fonc- tion f et
** crée une nouvelle liste “fraiche” avec malloc(3) ré- sultant des
** applications successives. Si une allocation échoue, la fonction renvoie
** NULL. Pointeur sur le premier maillon d’une liste.
*/
t_list					*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
/*
** ############################ Personal functions ############################
*/
/*
** Transforme une list chainee en tableau de chaines de caractere.
** Returns the node, NULL if malloc(3) failed, or lst=NULL.
*/
char					**ft_lstostrtab(t_list const *list);
/*
** Transforme une list chainee en chaines de caractere.
** Returns the node, NULL if malloc(3) failed, or lst=NULL.
*/

char					*ft_lstostr(t_list *list);
/*
** The ft_lstlen() function count the nodes until NULL element is found.
*/
size_t					ft_lstlen(t_list const *list);
/*
** The ft_lstreverse() function reverse the list so the first become last and
** vice versa, returns the new first element.
*/
t_list					*ft_lstreverse(t_list *list);
/*
** The ft_newlink() function create a dual chained node with next and prev node
** is NULL.
** Returns the node, NULL if malloc(3) failed, content is NULL or ctnt_size=0
*/
t_link					*ft_newlink(void *content, size_t ctnt_size);
/*
** The ft_newchlist() function create a dual chained list with the first link.
** The structure (t_chlist) is an handler who keep the `first' and `last' node
** (t_link) of the list and the `lst_size' (number of `t_link' in list).
** If the link is NULL, it creates an empty list handler, the lst_size will
** be 0, and the first and last element in list will be set to NULL.
** Return the pointer to the "fresh" structure (`malloc(3)'), NULL if failed.
*/
t_chlist				*ft_newchlist(t_link *link);
/*
** The ft_addendlink() function append `t_link'  at the end of the `t_chlist'.
** Returns pointer to list nandler. Returns NULL if any malloc(3) failed.
** If list_handler is NULL call ft_newchlist() to create the list with
** element in it.
** If content is NUL or malloc(3) failed returns NULL.
*/
t_link					*ft_addendlink(t_chlist **list_handler,
	void *content, size_t ctnt_size);
/*
** The ft_addstartlink() worked same as ft_addendlink() except that it add
** the element at the start of the list.
*/
t_link					*ft_addstartlink(t_chlist **list_handler,
	void *content, size_t ctnt_size);
/*
** The ft_addnlink() worked same as ft_addendlink() except that it add
** the element at the pos_in_lst index in list.
** If pos_in_lst is superior than `lst_size' it'll return NULL.
*/
t_link					*ft_addnlink(t_chlist **list_handler,
	void *content, size_t ctnt_size, size_t pos_in_lst);
/*
** The ft_getnlink() function returns the node in the list at index `n'.
** Return NULL if `pos_in_lst' is under the size of the list, if
** `list_handler' is NULL, or if there is a problem inside the list.
*/
t_link					*ft_getnlink(t_chlist const *list_handler,
	size_t pos_in_lst);
/*
** The ft_delchlist() function free (free(3)) the chained list `list'.
*/
void					ft_delchlist(t_chlist **list,
	void (*delcont)(void *, size_t));
/*
** The ft_delonelink() function free (free(3)) the node at index `n'.
** Reorganise the list to a corehent form.
*/
void					ft_delonelink(t_chlist **list,
	void (*delcont)(void *, size_t), t_link **todel);
/*
** The ft_putbinary_fd() function print `len' bytes memory pointed by `toprint'.
*/
void					ft_putbinary_fd(void *toprint, size_t len, int fd);
#endif
