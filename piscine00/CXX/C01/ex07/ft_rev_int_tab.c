void ft_rev_int_tab(int *tab, int size)
{
	int i;
	char c;	

	if (size < 2)
		return ;
	i = 0;
	while (i < size)
	{
		c = tab[i];
		tab[i] = tab [size];
		tab[size] = c;
		i++;
		size--;
	}
}
