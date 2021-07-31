#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (*to_find == '\0')
		return (str);
	while (to_find[b] != str[0])
	{
		str++;
		if (*str == '\0')
			return (0);
	}
	while (to_find[a] == str[a] || to_find[a] == '\0')
	{
		if (to_find[a] == '\0')
			return (str);
		a++;
	}
	return (0);
}
