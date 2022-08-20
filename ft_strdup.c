#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	int	i;
	size_t	size;
	char	*res;

	i = 0;
	size = ft_strlen(src) + 1;
	res = (char *)malloc(size * sizeof(char));
	if(!res)
		return (0);
	while (src[i] != '\0')
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (0);
}
