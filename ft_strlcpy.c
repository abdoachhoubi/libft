#include "libft.h"

char	*ft_strcpy(char *s1, const char *s2, size_t len)
{
	size_t	i;

	i = 0;
	while (s2[i] != '\0' && i < len - 1)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
