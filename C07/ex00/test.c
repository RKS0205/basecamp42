#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strdup(char *src);

int main(void)
{
	char *test;
	char *test2;
	char src[] = "hello test";

	test = ft_strdup(src);
	test2 = strdup(src);
	printf("%s", test);
	printf("%s", test2);
}
