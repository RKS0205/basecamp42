#include <unistd.h>

unsigned int	my_count(char *dest, char *src, unsigned int a, unsigned int s)
{
	unsigned int	count;

	count = 0;
	while (src[a] != '\0')
	{
		a++;
		count++;
	}
	s = s + a;
	a = 0;
	while (dest[a] != '\0')
	{
		a++;
		count++;
	}
	if (s > count)
		return (count);
	else
		return (s);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	count;

	a = 0;
	b = 0;
	count = my_count(dest, src, a, size);
	while (dest[a] != '\0')
	{
		a++;
	}
	while (a < (size - 1) && src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (count);
}
