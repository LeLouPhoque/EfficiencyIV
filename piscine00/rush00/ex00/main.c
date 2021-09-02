void	rush(int a, int b);

char	ft_atoi (char *str)
{
	int i;
	int res;

	res = 0,
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res);
}

int	main (int ac, char **av)
{
	if (ac == 3)
		rush (ft_atoi(av[1]), ft_atoi(av[2]));
	else if (ac == 1) 
		rush (5, 5);
	return (0);
}
