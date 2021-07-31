#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] <= 'Z' && str[a] >= 'A')
		{
		}
		else
		{
			return (0);
		}
		a++;
	}
	return (1);
}
