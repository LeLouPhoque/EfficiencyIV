void ft_ultimate_div_mod(int *a, int *b)
{
	int *swap;
	*swap = *a;
	*a = *a / *b;
	*b = *swap % *b;
}
