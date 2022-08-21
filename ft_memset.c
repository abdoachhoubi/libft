#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t		i;
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
