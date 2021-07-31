#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	int a;

	char str[] = "ASDNSIUADHJIOUSAHD0000aaaaaa";
	a = 0;
	ft_strlowcase(str);
	while (str[a] != 0)
	{
		write (1, &str[a], 1);
		a++;
	}
}
