/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachhoub <aachhoub@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:09:15 by aachhoub          #+#    #+#             */
/*   Updated: 2022/08/24 15:57:58 by aachhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcchr(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s, char *set)
{
	int	i;
	int	j;
	int	len;

	if (!s)
		return (0);
	i = 0;
	j = ft_strlen(s) - 1;
	while (s[i] != '\0' && ft_strcchr(set, s[i]) == 1)
		i++;
	while (j >= 0 && ft_strcchr(set, s[j]))
		j--;
	if (j == -1)
		len = 0;
	else
		len = j - i + 1;
	return (ft_strsub(s, i, len));
}