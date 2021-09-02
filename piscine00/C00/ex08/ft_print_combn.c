#include <unistd.h>

void ft_putchar (char c)
{
	write (1, &c, 1);
}

int ft_notsame (int k, int n)
{
	int a;
	int b;
	int i;
	int j;
	int l;
	int m;
	char str[11] = "0000000000";
	
	j = k;
	k = 0;
	i = 0;
	a = 0;
	b = 1;
	while (i < n)
	{
		m = i;
		while (m >= 0)
		{
			l = l * 10;
		m++;
		}
		while (k > l)
			k = k / 10;	
		str[i] = k + '0';
		k = j;
		i++;
	}
	while (a < n)
	{
		while (b < n)
		{
			if (str[a] == str[b] || str[a] > str[b])
				return (1);
			b++;
		}
		b = a + 1;
		a++;
	}
	return (0);
}
void ft_putnbr(int nb)
{
	long int	i;
	
	i = nb;
	if (i < 0)
	{
		write (1, "-", 1);
		i = i * -1;
	}
	if (i > 9)
	{
		ft_putnbr(i / 10);
		ft_putchar(i % 10 + '0');
	}
	else
		ft_putchar(i + '0');
}

void ft_print_combn(int n)
{
	int i;
	int j;
	int k;

	j = 1;
	k = 1;
	i = n;
	while (i > 0)
	{
		j = j * 10;
		i--;
	}
	while (k < j)
	{
		if (ft_notsame(k, n) == 0)
			ft_putnbr(k);
		write (1, " ", 1);
		k++;
	} 
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int ac, char **av)
{
	(void) ac;
	ft_print_combn(atoi(av[1]));
	return (0);
}
