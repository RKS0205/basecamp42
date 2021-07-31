#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= ' ' && str[a] <= '~')
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
