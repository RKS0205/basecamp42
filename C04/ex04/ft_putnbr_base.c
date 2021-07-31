#include <unistd.h>

void	my_loop(int nbr, char *base, int size)
{
	if (nbr >= size)
	{
		my_loop((nbr / size), base, size);
	}
	nbr = nbr % size;
	write (1, &base[nbr], 1);
}

int	my_condition(char *base, int size)
{
	int	x;
	int	y;

	x = 0;
	while (x < size)
	{
		y = x + 1;
		while (y < size)
		{
			if (base[x] == base[y])
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;
	int	condition;

	size = 0;
	while (base[size] != '\0')
	{
		size++;
		if (base[size] == '+' || base[size] == '-')
			return ;
	}
	if (size < 2)
		return ;
	condition = my_condition(base, size);
	if (condition == 0)
		return ;
	if (nbr < 0)
	{
		write (1, "-", 1);
		nbr = -nbr;
	}
	my_loop(nbr, base, size);
}
