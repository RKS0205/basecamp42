#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int *a, int*b);

int	main(void)
{
	int *a = calloc(1, sizeof(int));
	int *b = calloc(1, sizeof(int));

	*a = 42;
	*b = 24;
	printf("Before:\n %p: %d, %p %d\n", a, *a, b, *b);
	ft_swap(a, b);
	printf("After:\n %p: %d, %p %d\n", a, *a, b, *b);
	return (0);
}