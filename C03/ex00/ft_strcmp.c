#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (s1[a] == s2[a] && s1[a] != '\0')
	{
		a++;
	}
	b = s1[a] - s2[a];
	return (b);
}
