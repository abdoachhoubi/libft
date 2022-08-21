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
size_t	*ft_strlcpy(char *s1, const char *s2, size_t len);
char	*ft_strdup(const char *s1);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	ft_bzero(void *s, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
#endif
