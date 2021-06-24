# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/18 18:04:56 by pweinsto          #+#    #+#              #
#    Updated: 2021/06/24 11:30:20 by pweinsto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_calloc.c ft_isascii.c ft_memccpy.c ft_memcpy.c ft_strchr.c ft_strtrim.c ft_strlcpy.c \
ft_strnstr.c ft_toupper.c ft_atoi.c ft_isalnum.c ft_isdigit.c ft_memchr.c ft_memmove.c \
ft_strdup.c ft_strjoin.c ft_strlen.c ft_strmapi.c ft_strrchr.c ft_bzero.c ft_isalpha.c ft_isprint.c ft_itoa.c ft_memcmp.c \
ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strlcat.c ft_strncmp.c ft_substr.c ft_tolower.c

NAME = libft

FLAGS = -Wall -Wextra -Werror 

all: objects library

objects:
	gcc -c $(SRC)

library:
	ar rc libft.a *.o

clean:
	rm *.o

fclean: clean
	rm $(NAME)

re: fclean all