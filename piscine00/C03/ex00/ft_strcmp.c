int ft_strcmp(char *s1, char *s2)
{
	int i;
	
	i = 0;
	while (*s1 && (*s1 == *s2))
		s1++, s2++;
	return (*s1 - *s2);
}

int	main(int ac, char **av)
{
	printf ("%d\n", ft_strcmp(av[1], av[2]));
	printf ("%d\n", strcmp(av[1], av[2]));
	return 0;
}
