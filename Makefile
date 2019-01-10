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

SOURCES = ft_atoi.c\
          ft_bzero.c\
          ft_isalnum.c\
          ft_isalpha.c\
          ft_isascii.c\
          ft_isdigit.c\
          ft_islower.c\
          ft_isprint.c\
          ft_isupper.c\
          ft_memalloc.c\
          ft_memccpy.c\
          ft_memchr.c\
          ft_memcmp.c\
          ft_memcpy.c\
          ft_memmove.c\
          ft_memset.c\
          ft_putnbr.c\
          ft_strcapitalize.c\
          ft_strcat.c\
          ft_strchr.c\
          ft_strcmp.c\
          ft_strcpy.c\
          ft_strdup.c\
          ft_strlcat.c\
          ft_strlcpy.c\
          ft_strlen.c\
          ft_strlowcase.c\
          ft_strncat.c\
          ft_strncmp.c\
          ft_strncpy.c\
          ft_strnstr.c\
          ft_strrchr.c\
          ft_strstr.c\
          ft_strupcase.c\
          ft_tolower.c\
          ft_toupper.c\
          ft_putchar.c\

HEADERS = libft.h

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
