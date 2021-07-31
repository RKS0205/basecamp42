#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main (void)
{
	char	str[] = "Eu gosto de programação";
	char	to_find[] = "de";
	char	str2[] = "Eu gosto de programação";
	char	to_find2[] = "de";
	char *result;

	result = strstr(str, to_find);
	printf ("%s", result);
	result = ft_strstr(str2, to_find2);
	printf ("%s", result);
}