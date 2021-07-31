#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	b;

	b = 0;
	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
