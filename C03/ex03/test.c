#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main (void)
{
	char dest[21] = "Oi";
	char src[] = " teste";
	char dest2[21] = "Oi";
	char src2[] = " teste";
	
	strncat(dest, src, 100);
	printf("%s", dest);
	ft_strncat(dest2, src2, 100);
	printf ("%s", dest2);
}
