#include <unistd.h>
#include<stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	int a;
	a = ft_atoi("    ++--1234556bfydiusbdfns43217433");
	printf ("%i", a);
}