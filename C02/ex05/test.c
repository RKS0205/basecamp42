#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	int a;

	char str[] = "AFDSABHFBSAJU";
	a = ft_str_is_uppercase(str);
	a = a + 48;

	write (1, &a, 1);
	return (0);
}
