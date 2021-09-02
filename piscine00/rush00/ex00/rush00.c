#include <unistd.h>

void ft_putchar (char c);

void ft_rush (int rows, int cols) 
{
	int i;
	int j;

	j = cols + 1;
	i = rows + 1;
	while(--j)
	{
		while (--i)
		{
			if ((i == 1 && j == 1 )||( i == rows && j == 1) ||
				(i == 1 && j == cols) ||( i == rows && j == cols))
				ft_putchar ('o');
			else if (i == 1 || i == rows)
				ft_putchar ('|');
			else if (j  == 1 || j == cols)
				ft_putchar ('-');
			else 
				ft_putchar (' ');
		}
		ft_putchar ('\n');
		i = rows + 1;
	}
}

void rush (int rows, int cols)
{
	if (rows > 0 && cols > 0 && rows <= 2147483647 && cols <= 2127483647)
	{
		ft_rush (rows, cols);
	}
}
