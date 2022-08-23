/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachhoub <aachhoub@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:36:55 by aachhoub          #+#    #+#             */
/*   Updated: 2022/08/22 19:55:30 by aachhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		total_len;
	char	*str;

	total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(total_len * sizeof(char));
	if (!str)
		return (0);
	ft_strlcpy(str, s1, total_len);
	ft_strlcat(str, s2, total_len);
	str[total_len - 1] = '\0';
	return (str);
}
