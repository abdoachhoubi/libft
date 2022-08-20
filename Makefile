FILES = ft_strchr ft_strlen ft_putchar ft_putstr ft_putnbr ft_strcpy ft_strdup
TARGETS = $(FILES:=.c)
OBJECTS = $(FILES:=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I .

all: $(OBJECTS)
	ar -rc libft.a $(OBJECTS)

clean:
	rm -f *.o

fclean: clean
	rm -f libft.a

re: fclean all
