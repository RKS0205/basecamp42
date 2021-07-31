int	ft_is_prime(int nb)
{
	int	a;
	int	b;

	a = 2;
	b = (nb / 2) + 1;
	if (nb < 2)
		return (0);
	while (a < b)
	{
		if (nb % a == 0)
			return (0);
		if (a == 2)
			a++;
		else
			a += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0 && nb < 2147483647)
	{
		nb++;
	}
	return (nb);
}
