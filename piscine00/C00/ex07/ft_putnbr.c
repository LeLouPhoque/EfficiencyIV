#include <unistd.h>

void ft_putchar (char c)
{
	write (1, &c, 1);
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
