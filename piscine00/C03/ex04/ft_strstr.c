char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!*to_find)
		return(str);
	while (*str)
	{
		while (str[i] == to_find[j])
		{
			i++;
			j++;
		}
		if (to_find[j] == '\0')
			return(str);	
		str++;
	}
	return(0);
}
