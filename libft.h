#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int nb, int fd);
size_t	ft_strlen(const char *s);
char	*ft_strchr(char *s, int c);
char	*ft_strlcpy(char *s1, const char *s2, size_t len);
char	*ft_strdup(const char *s1);
#endif
