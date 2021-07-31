#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main (void)
{
	char dest[21] = "Oiiiiiii";
	char src[] = " teste";
	unsigned int a;
	unsigned int b;
	char dest2[21] = "Oiiiiiii";
	char src2[] = " teste";

	a = ft_strlcat(dest, src, 15);
	b = strlcat(dest2, src2, 15);
	printf("%s \n", dest);
	printf("%i \n", a);
	printf("%s \n", dest2);
	printf("%i \n", b);
}
