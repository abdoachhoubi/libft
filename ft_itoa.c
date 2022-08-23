/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachhoub <aachhoub@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 21:45:07 by aachhoub          #+#    #+#             */
/*   Updated: 2022/08/23 21:48:31 by aachhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ilen(int nb)
{
	size_t	size;
	int		i;

	size = 0;
	if (nb < 0)
	{
		i = nb * -1;
		size++;
	}
	else
		i = nb;
	while (i > 0)
	{
		i /= 10;
		size++;
	}
	return (size);
}

int	ft_sign(int *nb, size_t *size)
{
	if (*nb < 0)
	{
		*nb = *nb * -1;
		*size = *size - 1;
		return (-1);
	}
	return (1);
}

char	*ft_strrev(char *str, size_t len)
{
	size_t	i;
	char	c;

	i = 0;
	while (i < len - 1 / 2)
	{
		c = str[i];
		str[i] = str[len - 1];
		str[len - 1] = c;
		len--;
		i++;
	}
	return (str);
}

char	*ft_itoa(int nb)
{
	size_t	size;
	size_t	i;
	int		sign;
	char	*a;

	i = 0;
	size = ft_ilen(nb);
	a = (char *)malloc((size + 1) * sizeof(char));
	if (!a)
		return (0);
	sign = ft_sign(&nb, &size);
	if (nb == 0)
		a[i++] = '0';
	while (i < size)
	{
		a[i++] = (nb % 10) + 48;
		nb /= 10;
	}
	if (sign == -1)
		a[i++] = '-';
	a[i] = '\0';
	ft_strrev(a, ft_strlen(a));
	return (a);
}
