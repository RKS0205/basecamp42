#include <unistd.h>

char	*ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (a < (n - 1))
	{
		dest[a] = src[a];
		a++;
	}
	if (a == (n - 1))
	{
		dest[a] = '\0';
	}
	return (dest);
}
