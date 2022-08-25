# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aachhoub <aachhoub@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/22 19:42:36 by aachhoub          #+#    #+#              #
#    Updated: 2022/08/25 01:10:34 by aachhoub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = ft_strchr ft_strlen ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd ft_strlcpy ft_strlcat ft_strdup ft_memset ft_bzero ft_memcmp ft_memcpy ft_memmove  ft_isascii ft_isdigit ft_isalpha ft_isalnum ft_isprint ft_toupper ft_tolower ft_atoi ft_calloc ft_strjoin ft_strnstr ft_memccpy ft_memchr ft_strncmp ft_strsub ft_itoa ft_strmapi ft_split ft_strtrim
BONUS_F = ft_lstnew ft_lstsize ft_lstlast ft_lstadd_back
BONUS_T = $(BONUS_F:=.c)
BONUS_O = $(BONUS_F:=.o)
TARGETS = $(FILES:=.c)
OBJECTS = $(FILES:=.o)
BONUS = bonus
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

$(BONUS): $(BONUS_O)
	$(CLIB) $(NAME) $(BONUS_O)
clean:
	$(RM) $(OBJECTS) $(BONUS_O)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re
