#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		a;

	a = 0;
	while (src[a] != '\0')
		a++;
	dest = malloc (a * sizeof(char));
	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
