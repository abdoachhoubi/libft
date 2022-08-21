FILES = ft_strchr ft_strlen ft_putchar_fd ft_putstr_fd ft_putnbr_fd ft_strlcpy ft_strdup ft_memset ft_bzero ft_memcmp ft_memcpy ft_memmove  ft_x
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
