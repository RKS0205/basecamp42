int	ft_sqrt(int nb)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while ((a * a) <= nb && a <= 46340)
	{
		b = a * a;
		if (b == nb)
			return (a);
		a++;
	}
	return (0);
}
