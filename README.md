```
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    README.md                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aachhoub <aachhoub@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/18  by aachhoub                  #+#    #+#              #
#    Updated: 2022/08/25  by aachhoub                 ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
```

# Libft

The aim of this project is to code a C library regrouping usual functions that you'll be allowed to use in all your other projects.

## 1. libc standard functions (part 1):

- [x]  ft_isascii - test for ASCII character.
- [x]  ft_isalnum - alphanumeric character test.
- [x]  ft_isalpha - alphabetic character test.
- [x]  ft_isdigit - decimal-digit character test.
- [x]  ft_isprint - printing character test (space character inclusive).
- [x]  ft_tolower - upper case to lower case letter conversion.
- [x]  ft_toupper - lower case to upper case letter conversion.
- [x]  ft_atoi - convert ASCII string to integer.
- [x]  ft_calloc - memory allocation.
- [x]  ft_memset - write a byte to a byte string.
- [x]  ft_memchr - locate byte in byte string.
- [x]  ft_memcmp - compare byte string.
- [x]  ft_memmove - copy byte string.
- [x]  ft_memcpy - copy memory area.
- [x]  ft_memccpy - copy string until character found.
- [x]  ft_strlen - find length of string.
- [x]  ft_strchr - locate character in string (first occurrence).
- [x]  ft_strrchr - locate character in string (last occurence).
- [x]  ft_strnstr - locate a substring in a string (size-bounded).
- [x]  ft_strncmp - compare strings (size-bounded).
- [x]  ft_strdup - save a copy of a string (with malloc).
- [x]  ft_strlcpy - size-bounded string copying.
- [x]  ft_strlcat - size-bounded string concatenation.
- [x]  ft_bzero - write zeroes to a byte string.

## 2. Non Standard Functions (Part 2):

- [x]  ft_putchar_fd - output a character to given file.
- [x]  ft_putstr_fd - output string to given file.
- [x]  ft_putendl_fd - output string to given file with newline.
- [x]  ft_putnbr_fd - output integer to given file.
- [x]  ft_itoa - convert integer to ASCII string.
- [x]  ft_strsub - extract substring from string.
- [x]  ft_strtrim - trim beginning and end of string with the specified characters.
- [x]  ft_strjoin - concatenate two strings into a new string (with malloc).
- [x]  ft_split - split string, with specified character as delimiter, into an array of strings.
- [x]  ft_strmapi - create new string from modifying string with specified function.

## 3. Linked Lists Functions (Bonus):

- [x]  ft_lstnew - create new list.
- [x]  ft_lstsize - count elements of a list.
- [x]  ft_lstlast - find last element of list.
- [x]  ft_lstadd_back - add new element at end of list.
- [ ]  ft_lstadd_front - add new element at beginning of list.
- [ ]  ft_lstdelone - delete element from list.
- [ ]  ft_lstclear - delete sequence of elements of list from a starting point.
- [ ]  ft_lstiter - apply function to content of all list's elements.
- [ ]  ft_lstmap - apply function to content of all list's elements into new list.

## 4. Header and Makefile:

- [x]  libft.h
- [x]  Makefile

## 5. Testing:

- [ ]  [Libftest](https://github.com/jtoty/Libftest)
- [ ]  [Libft Unit Test](https://github.com/alelievr/libft-unit-test)
- [ ]  [Libft Destructor](https://github.com/t0mm4rx/libftdestructor)
