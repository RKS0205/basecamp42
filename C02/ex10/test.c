#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strlcpy(char *dest, char *src, unsigned int n);

int main()
{
	char *dest;
	unsigned int n;
	char a;
	unsigned int b;

	b = 0;
	dest = 0;
	char src[] = "olaa";
	n = 3;
	dest = calloc(11, sizeof(char));
	dest = ft_strlcpy(dest, src, n);
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
