
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int res;
	int offset;
	int *range;

	res = ft_ultimate_range(&range, 0, 8);
	if (res == -1)
	{
		printf("Error\n");
		return (1);
	}
	offset = 0;
	while (offset < 8)
	{
		printf("%d ", range[offset]);
		offset++;
	}
	printf("\nres: %d", res);
	printf("\n");
	return (0);
}