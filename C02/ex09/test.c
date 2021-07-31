#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	int	a;

	a = 0;
	char str[] = "OiiiIiiIIIi  olA/teste!abc 42sp";
	ft_strcapitalize(str);

	while (str[a] != '\0')
	{
		write (1, &str[a], 1);
		a++;
	}
	return (0);
}