int	ft_atoi(char *str)
{
	int	a;
	int	n;
	int	x;

	n = 1;
	a = 0;
	while ((str[a] > 8 && str[a] < 14) || str[a] == 32)
		a++;
	while (str[a] == '+' || str[a] == '-')
	{
		if (str[a] == '-')
		{
			n *= -1;
		}
		a++;
	}
	while (str[a] > 47 && str[a] < 58)
	{
		x = (x * 10) + (str[a] - 48);
		a++;
	}
	x = (x * n);
	return (x);
}
