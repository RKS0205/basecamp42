#include <unistd.h>
#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char str[] = "Oi \n voce esta bem?";
	ft_putstr_non_printable(str);
	printf("%s", str);

}