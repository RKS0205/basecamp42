#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] <= 122 && str[a] >= 97) || (str[a] <= 90 && str[a] >= 65))
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
