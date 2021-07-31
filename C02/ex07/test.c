#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	int a;

	char str[] = "jfiusadjiosajdiosaj000AAAA";
	a = 0;
	ft_strupcase(str);
	while (str[a] != 0)
	{
		write (1, &str[a], 1);
		a++;
	}
}
