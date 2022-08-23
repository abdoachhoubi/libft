/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachhoub <aachhoub@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:42:16 by aachhoub          #+#    #+#             */
/*   Updated: 2022/08/23 12:48:04 by aachhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int nb, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putendl_fd(char *str, int fd);
size_t	ft_strlen(const char *s);
char	*ft_strchr(char *s, int c);
size_t	ft_strlcpy(char *s1, const char *s2, size_t len);
size_t	ft_strlcat(char *s1, const char *s2, size_t len);
char	*ft_strdup(const char *s1);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	ft_bzero(void *s, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_isascii(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_atoi(const char *nptr);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strnstr(const char *haystack, const char *needle, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
#endif
