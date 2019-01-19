# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tramet <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/06 23:25:32 by tramet            #+#    #+#              #
#    Updated: 2019/01/06 23:25:45 by tramet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

FLAGS = -Wall -Wextra -Werror

NAME = libft.a

SOURCES =	ft_addendlink.c\
			ft_addnlink.c\
			ft_addstartlink.c\
			ft_atoi.c\
			ft_bzero.c\
			ft_delchlist.c\
			ft_delonelink.c\
			ft_getnlink.c\
			ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_islower.c\
			ft_isprint.c\
			ft_isupper.c\
			ft_itoa.c\
			ft_lstadd.c\
			ft_lstdel.c\
			ft_lstdelone.c\
			ft_lstlen.c\
			ft_lstmap.c\
			ft_lstnew.c\
			ft_lstostr.c\
			ft_lstostrtab.c\
			ft_lstreverse.c\
			ft_memalloc.c\
			ft_memccpy.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_memcpy.c\
			ft_memdel.c\
			ft_memmove.c\
			ft_memset.c\
			ft_newchlist.c\
			ft_newlink.c\
			ft_putbinary_fd.c\
			ft_putchar.c\
			ft_putchar_fd.c\
			ft_putendl.c\
			ft_putendl_fd.c\
			ft_putnbr.c\
			ft_putnbr_fd.c\
			ft_putstr.c\
			ft_putstr_fd.c\
			ft_strcapitalize.c\
			ft_strcat.c\
			ft_strchr.c\
			ft_strclr.c\
			ft_strcmp.c\
			ft_strcpy.c\
			ft_strdel.c\
			ft_strdup.c\
			ft_strequ.c\
			ft_striter.c\
			ft_striteri.c\
			ft_strjoin.c\
			ft_strlcat.c\
			ft_strlcpy.c\
			ft_strlen.c\
			ft_strmap.c\
			ft_strmapi.c\
			ft_strncat.c\
			ft_strncmp.c\
			ft_strncpy.c\
			ft_strnequ.c\
			ft_strnew.c\
			ft_strnstr.c\
			ft_strrchr.c\
			ft_strsplit.c\
			ft_strstr.c\
			ft_strsub.c\
			ft_strtrim.c\
			ft_strupcase.c\
			ft_tolower.c\
			ft_toupper.c

OBJECT = $(SOURCES:.c=.o)

$(NAME):
	$(CC) $(FLAGS) -c $(SOURCES)
	ar -rc $(NAME) $(OBJECT)
	ranlib $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJECT)

fclean: clean
	rm -rf $(NAME)

re: fclean all
