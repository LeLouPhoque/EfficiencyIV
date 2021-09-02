#include <unistd.h>

void ft_putchard(char c)
{
	write (1, &c, 1);
}

void ft_hex (unsigned char c)
{
	char *base;
	
	base = "0123456789abcdef";
	ft_putchard (base[c / 16]);
	ft_putchard (base[c % 16]);
}
void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < ' ' || *str == 127)
		{
			ft_putchard('\\');
			ft_hex(*str);
		}
		else
			ft_putchard(*str);
		str++;
	}
}
#include <unistd.h>

void	ft_putstr(char *str)
{
	int l;

	l = 0;
	while (str[l])
	{
		l++;
	}
	write(1, str, l);
}

int		main()
{
	char c[] = "Coucou\ntu vas bien ?";
	ft_putstr("Coucou\\0atu vas bien ?:");
	ft_putstr_non_printable(c);
	char d[] = "\x81\xbe";
	ft_putstr("\n\\81\\be:");
	ft_putstr_non_printable(d);
}
