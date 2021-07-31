#include <unistd.h>

int	main(int argc, char **argv)
{
	int	a;

	(void)argc;
	a = 0;
	while (argv[0][a] != '\0')
	{
		write (1, &argv[0][a], 1);
		a++;
	}
	write (1, "\n", 1);
}
