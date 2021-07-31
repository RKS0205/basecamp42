#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int main (void)
{
	int a;
	int b;

	char s1[] = "abcdsa";
	char s2[] = "abcdsa";
	b = strcmp(s1, s2);
	a = ft_strcmp(s1, s2);
	printf("%d", a);
	printf("%d", b);
}