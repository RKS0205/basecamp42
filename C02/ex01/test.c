#include <unistd.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
	char *dest;
	char *src;
	unsigned int n;
	char a;
	unsigned int b;

	b = 0;
	dest = 0;
	src = calloc(11, sizeof(char));
	src = "olaa";
	n = 5;
	dest = calloc(11, sizeof(char));
	dest = ft_strncpy(dest, src, n);
	while (b < n)
	{
		a = dest[b];
		write (1, &a, 1);
		b++;
		if (dest[b] == '\0')
		{
			write (1, "0", 1);
		}
	}
	return (0);
}
