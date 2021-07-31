#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int main (void)
{
	char dest[21] = "Oi";
	char src[] = " teste";
	char dest2[21] = "Oi";
	char src2[] = " teste";
	
	strcat(dest, src);
	printf("%s", dest);
	ft_strcat(dest2, src2);
	printf ("%s", dest2);
}
