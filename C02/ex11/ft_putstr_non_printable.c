#include <unistd.h>

int	my_condition(int x)
{
	if (x < 10)
	{
		x = x + 48;
	}
	else
	{
		x = x + 87;
	}
	return (x);
}

void	ft_putstr_non_printable(char *str)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 32 || str[a] > 126)
		{
			b = str[a] % 16;
			str[a] = str[a] / 16;
			c = str[a] % 16;
			c = my_condition(c);
			b = my_condition(b);
			write (1, "\\", 1);
			write (1, &c, 1);
			write (1, &b, 1);
		}
		else
		{
			write(1, &str[a], 1);
		}
		a++;
	}
}
