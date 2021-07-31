int	ft_iterative_factorial(int nb)
{
	int	a;

	a = nb;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
		return (1);
	while (a > 1)
	{
		a--;
		nb *= a;
	}
	return (nb);
}
