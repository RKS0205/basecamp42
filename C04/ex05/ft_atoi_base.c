int	my_power(int a, int b, char *str, char *base)
{
	int	count;
	int	size_str;
	int	size_base;
	int	mult;

	size_str = 0;
	size_base = 0;
	while (base[size_base] != '\0')
		size_base++;
	while (str[size_str] != '\0')
		size_str++;
	count = (size_str - 1) - a;
	mult = size_base;
	if (count == 0)
		return (b);
	while (count > 1)
	{
		size_base *= mult;
		count--;
	}
	b = b * size_base;
	return (b);
}

int	my_condition(char *base)
{
	int	x;
	int	y;
	int	size;

	size = 0;
	while (base[size] != '\0')
		size++;
	if (size < 2)
		return (1);
	x = 0;
	while (x < size)
	{
		y = x + 1;
		while (y < size)
		{
			if (base[x] == base[y])
				return (1);
			y++;
		}
		x++;
	}
	return (0);
}

int	number_loop(char *str, char *base, int a, int n)
{
	int	b;

	while (str[a] != '\0')
	{		
		b = 0;
		while (base[b] != '\0')
		{
			if (base[b] == '+' || base[b] == '-'
				|| (base[b] > 8 && base[b] < 14) || base[b] == ' ')
				return (0);
			if (str[a] == base[b])
			{
				n += my_power(a, b, str, base);
			}
			b++;
		}
		a++;
	}
	return (n);
}

int	ft_atoi_base(char *str, char *base)
{
	int	a;
	int	b;
	int	n;

	a = 0;
	b = 0;
	n = 0;
	a = my_condition(base);
	if (a == 1)
		return (0);
	n = number_loop(str, base, a, n);
	return (n);
}
