/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachhoub <aachhoub@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:38:21 by aachhoub          #+#    #+#             */
/*   Updated: 2022/08/22 19:54:17 by aachhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*buff;

	buff = s;
	i = 0;
	while (i < n)
	{
		buff[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
