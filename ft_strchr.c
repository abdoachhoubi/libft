char	*ft_strchr(char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
		{
			return (&str[i]);
		}
		i++;
	}
	if (str[i] == (char)c)
		return (&str[i]);
	return (0);
}
