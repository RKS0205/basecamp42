int	ft_iterative_power(int nb, int power)
{
	int	base_nb;

	if (power == 1)
		return (nb);
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	base_nb = nb;
	while (power > 1)
	{
		nb *= base_nb;
		power--;
	}
	return (nb);
}
