char *ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] <= 'z' && str[i] >= 'a')
			str[i] = str[i] - 32;
		i++;
	}	
	return (str);
}
