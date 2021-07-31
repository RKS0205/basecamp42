#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] <= '9' && str[a] >= '0')
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
