int		ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int		ft_islower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int		ft_isupper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char *ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = -1;
	if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
		str[i + 1] -= 32;
	i++;
	while (str[++i])
	{
		if (!(ft_isdigit(str[i]) || ft_islower(str[i]) || ft_isupper(str[i])))
		{				
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
	}
	return (str);
}
