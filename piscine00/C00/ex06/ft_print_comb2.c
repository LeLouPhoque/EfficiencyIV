#include <unistd.h>

void ft_putchar (char c)
{
	write (1, &c, 1);
}

void ft_print_comb2(void)
{
	int	a;
	int	b;
	
	a = 0;
	b = 1;
	while (a <= 98)
	{
		ft_putchar (a / 10 + '0');
		ft_putchar (a % 10 + '0');
		write (1, " ", 1);
		ft_putchar (b / 10 + '0');
		ft_putchar (b % 10 + '0');
		if (a != 98 || b != 99)
			write (1, ", ", 2);
		b++;
		if (b > 99)
		{
			a++;
			b = a + 1;
		}
	}	
}
