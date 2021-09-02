#include <unistd.h>

void ft_print(char i, char j, char k)
{
	write (1, &i, 1);
	write (1, &j, 1);
	write (1, &k, 1);
	if (i != '7' || j != '8' || k != '9')
	{
		write (1, ",", 1);
		write (1, " ", 1);
	}
	else 
		write (1, "\n", 1);
}

void ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	j = '1';
	k = '1';
	while (i <= '7')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{
				k++;
				if (k <= '9')
					ft_print (i, j, k);
			}
			k = j + 1;
			j++;
		}
		j = i + 1;
		i++;
	}
}
