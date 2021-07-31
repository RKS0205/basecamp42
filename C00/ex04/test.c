#include <stdio.h>

void	ft_is_negative(int n);

int	main(void)
{
	int i;
	
	i = -2;
	while (i <= 2)
	{
		ft_is_negative(i);
		i++;
	}
	printf("\n");
	return (0);
}