#include <stdio.h>
#include <unistd.h>

int	*ft_range(int min, int max);

int	main (void)
{
	int *a;
	int b;

	b = 0;
	a = ft_range(10, 100);
	while (a[b] != '\0')
	{
		printf("%d", a[b]);
		a++;
	}
}