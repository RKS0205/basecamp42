#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (s1[a] == s2[a] && s1[a] != '\0' && a < (n - 1))
	{
		a++;
	}
	if (n == 0)
	{
		return (0);
	}
	b = s1[a] - s2[a];
	return (b);
}
