# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aachhoub <aachhoub@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/22 19:42:36 by aachhoub          #+#    #+#              #
#    Updated: 2022/08/24 13:59:14 by aachhoub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = ft_strchr ft_strlen ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd ft_strlcpy ft_strlcat ft_strdup ft_memset ft_bzero ft_memcmp ft_memcpy ft_memmove  ft_isascii ft_isdigit ft_isalpha ft_isalnum ft_isprint ft_toupper ft_tolower ft_atoi ft_calloc ft_strjoin ft_strnstr ft_memccpy ft_memchr ft_strncmp ft_strsub ft_itoa ft_strmapi ft_split
TARGETS = $(FILES:=.c)
OBJECTS = $(FILES:=.o)
NAME = libft.a
CLIB = ar -rc
RM = rm -f
CC = gcc
FLAGS = -Wall -Wextra -Werror

%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@ -I .

all: $(NAME)

allc : $(NAME) clean

$(NAME): $(OBJECTS)
	$(CLIB) $(NAME) $(OBJECTS)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re
