#include <unistd.h>
#include <stdlib.h>
int	ft_str_is_numeric(char *str);

int	main(void)
{
	char *str;
	int a;

	str = calloc (30, sizeof(char));
	str = "1234567";
	a = ft_str_is_numeric(str);
	a = a + 48;

	write (1, &a, 1);
	return (0);
}
