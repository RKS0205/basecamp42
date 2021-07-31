#include <unistd.h>

char	*my_capitalize(char *str, int a)
{
	while (str[a] != '\0')
	{
		if (!(str[a - 1] >= 'A' && str[a - 1] <= 'Z'))
		{
			if (!(str[a - 1] >= 'a' && str[a - 1] <= 'z'))
			{
				if (!(str[a - 1] > 48 && str[a - 1] <= 57))
				{
					if (str[a] >= 'a' && str[a] <= 'z')
					{
						str[a] = str[a] - 32;
					}
				}
			}
		}
		a++;
	}
	return (str);
}

char	*my_minimize(char *str, int a)
{
	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
		{
			if (str[a - 1] >= 'A' && str[a - 1] <= 'Z')
			{
				str[a] = str[a] + 32;
			}
			else if (str[a - 1] >= 'a' && str[a - 1] <= 'z')
			{
				str[a] = str[a] + 32;
			}
			else if (str[a - 1] >= '0' && str[a - 1] <= '9')
			{
				str[a] = str[a] + 32;
			}
		}
		a++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	a;

	a = 0;
	my_minimize(str, a);
	my_capitalize(str, a);
	return (str);
}
