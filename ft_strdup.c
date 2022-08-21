#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int	i;
	size_t	size;
	char	*s2;

	i = 0;
	size = ft_strlen(s1) + 1;
	s2 = (char *)malloc(size * sizeof(char));
	if(!s2)
		return (0);
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
