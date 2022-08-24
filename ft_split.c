/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachhoub <aachhoub@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 00:35:37 by aachhoub          #+#    #+#             */
/*   Updated: 2022/08/24 14:00:05 by aachhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wdcount(const char *s, char c)
{
	int	i;
	int	v;
	int	count;

	i = 0;
	v = 1;
	count = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (v == 1 && s[i + 1] != '\0')
		{
			count++;
			v--;
		}
		if (s[i] == c && s[i + 1] != c)
		{
			v++;
		}
		i++;
	}
	return (count);
}

int	ft_strsublen(const char *s, char c, int **x, int *j)
{
	int	len;

	len = 0;
	while (s[**x] == c)
		**x = **x + 1;
	*j = **x;
	while (s[**x] != c && s[**x] != '\0')
	{
		len++;
		**x = **x + 1;
	}
	return (len);
}

char	*ft_strxdup(const char *s, char c, int *x)
{
	int		len;
	int		i;
	int		j;
	char	*str;

	i = 0;
	len = ft_strsublen(s, c, &x, &j);
	str = (char *)malloc(len * sizeof(char));
	if (!str)
		return (0);
	while (i < len)
	{
		str[i++] = s[j++];
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		x;
	int		len;
	char	**strs;

	i = 0;
	if (!s)
		return (0);
	len = ft_wdcount(s, c);
	strs = (char **)malloc(len * sizeof(char *));
	if (!strs)
		return (0);
	while (i < len)
	{
		strs[i] = ft_strxdup(s, c, &x);
		i++;
	}
	return (strs);
}
