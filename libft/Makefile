# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikalinin <ikalinin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/26 19:54:17 by ikalinin          #+#    #+#              #
#    Updated: 2023/01/26 20:28:04 by ikalinin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEAD = libft.h
CC = gcc
FLAGS = -Wall -Wextra -Werror

SRC =	ft_atoi.c	\
	ft_bzero.c	\
	ft_checker.c	\
	ft_isalnum.c	\
	ft_isalpha.c	\
	ft_isascii.c	\
	ft_isdigit.c	\
	ft_isprint.c	\
	ft_memchr.c	\
	ft_memcmp.c	\
	ft_memcpy.c	\
	ft_memmove.c	\
	ft_memset.c	\
	ft_strchr.c	\
	ft_strlcat.c	\
	ft_strlcpy.c	\
	ft_strlen.c	\
	ft_strncmp.c	\
	ft_strnstr.c	\
	ft_strrchr.c	\
	ft_tolower.c	\
	ft_toupper.c	\

OBJ =	ft_atoi.o	\
	ft_bzero.o	\
	ft_checker.o	\
	ft_isalnum.o	\
	ft_isalpha.o	\
	ft_isascii.o	\
	ft_isdigit.o	\
	ft_isprint.o	\
	ft_memchr.o	\
	ft_memcmp.o	\
	ft_memcpy.o	\
	ft_memmove.o	\
	ft_memset.o	\
	ft_strchr.o	\
	ft_strlcat.o	\
	ft_strlcpy.o	\
	ft_strlen.o	\
	ft_strncmp.o	\
	ft_strnstr.o	\
	ft_strrchr.o	\
	ft_tolower.o	\
	ft_toupper.o	\

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)
$(OBJ) : $(SRC)
	$(CC) -c $(FLAGS) $(SRC)

.PHONY: all clean fclean re
all : $(NAME)
clean :
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)
