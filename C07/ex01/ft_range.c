#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	a;

	a = 0;
	range = malloc (((max - min) * sizeof(int)) + 1);
	if (min >= max)
		return (0);
	while (min < max)
	{
		range[a] = min;
		a++;
		min++;
	}
	range[a] = '\0';
	return (range);
}
