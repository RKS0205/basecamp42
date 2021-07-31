#include <unistd.h>
#include <stdlib.h>
int	ft_str_is_printable(char *str);

int	main(void)
{
	char *str;
	int a;

	str = calloc (30, sizeof(char));
	str = "AFDSABHFBSAJU";
	a = ft_str_is_printable(str);
	a = a + 48;

	write (1, &a, 1);
	return (0);
}
