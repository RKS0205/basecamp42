#include <unistd.h>
#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	int a;
	char str[] = "abcd";
	char base[] = "0123456789abcdef";
	a = ft_atoi_base(str, base);
	printf ("%d", a);
}