# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aachhoub <aachhoub@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/22 19:42:36 by aachhoub          #+#    #+#              #
#    Updated: 2022/08/27 14:13:49 by aachhoub         ###   ########.fr        #
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
BSRC = bonus/ft_lstnew bonus/ft_lstsize bonus/ft_lstlast \
       bonus/ft_lstadd_back bonus/ft_lstadd_front \
       bonus/ft_lstdelone bonus/ft_lstclear bonus/ft_lstiter \
       bonus/ft_lstmap
OBJ = $(SRC:=.o)
BOBJ = $(BSRC:=.o)
INC = libft.h
NAME = libft.a
AR = ar -rc
RM = rm -f
CC = gcc
FLAGS = -Wall -Wextra -Werror

# Alerts:
ALERT = echo
DEFAULT = \033[0m
GREEN = \033[1;32m
YELLOW = \033[1;33m

%.o : %.c
	@$(ALERT) "$(YELLOW)Compiling	$<$(DEFAULT)"
	@$(CC) $(FLAGS) -c $< -o $@ -I $(INC)

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)
	@$(ALERT) "$(GREEN)Compiled Successfully ^_^$(DEFAULT)"

bonus: $(NAME) $(BOBJ)
	@$(AR) $(NAME) $(BOBJ)
	@$(ALERT) "$(GREEN)Bonus Compiled Successfully ^_^$(DEFAULT)"
clean:
	@$(RM) $(OBJ) $(BOBJ)
	@$(ALERT) "$(GREEN)Object files deleted ^_^$(DEFAULT)"

fclean: clean
	@$(RM) $(NAME)
	@$(ALERT) "$(GREEN)libft.a deleted ^_^$(DEFAULT)"

re: re_alert fclean all

re_alert:
	@$(ALERT) "$(YELLOW)Restarting$(DEFAULT)"

.PHONY: clean fclean re bonus
