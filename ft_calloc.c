/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:35:23 by aachhoub          #+#    #+#             */
/*   Updated: 2022/10/08 16:20:15 by aachhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	if (size == SIZE_MAX || count == SIZE_MAX)
		return (NULL);
	mem = malloc(count * size);
	if (mem)
		ft_bzero(mem, count * size);
	return (mem);
}
