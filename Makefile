# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aachhoub <aachhoub@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/22 19:42:36 by aachhoub          #+#    #+#              #
#    Updated: 2022/08/27 02:48:46 by aachhoub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_strchr ft_strlen ft_putchar_fd \
      ft_putstr_fd ft_putendl_fd ft_putnbr_fd \
      ft_strlcpy ft_strlcat ft_strdup ft_memset \
      ft_bzero ft_memcmp ft_memcpy ft_memmove \
      ft_isascii ft_isdigit ft_isalpha ft_isalnum \
      ft_isprint ft_toupper ft_tolower ft_atoi \
      ft_calloc ft_strjoin ft_strnstr ft_memccpy \
      ft_memchr ft_strncmp ft_substr ft_itoa \
      ft_strmapi ft_split ft_strtrim ft_strrchr
BSRC = ft_lstnew ft_lstsize ft_lstlast ft_lstadd_back \
       ft_lstadd_front
OBJ = $(SRC:=.o)
BOBJ = $(BSRC:=.o)
INC = libft.h
NAME = libft.a
AR = ar -rc
RM = rm -f
CC = gcc
FLAGS = -Wall -Wextra -Werror

%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@ -I $(INC)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

bonus: $(NAME) $(BOBJ)
	$(AR) $(NAME) $(BOBJ)
clean:
	$(RM) $(OBJ) $(BOBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

all_c: all clean

.PHONY: clean fclean re bonus all_c
