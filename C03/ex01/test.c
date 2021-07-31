#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main (void)
{
	int a;
	int b;
	unsigned int n;

	n = 0;
	char s1[] = "dsacxzsd";
	char s2[] = "adasdsd";
	b = strncmp(s1, s2, n);
	a = ft_strncmp(s1, s2, n);
	printf("%d", a);
	printf("%d", b);
}