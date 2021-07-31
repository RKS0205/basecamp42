#include <unistd.h>

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	(void)argc;
	a = 1;
	while (argv[a] != '\0')
	{
		b = 0;
		while (argv[a][b] != '\0')
		{
			write (1, &argv[a][b], 1);
			b++;
		}
		write (1, "\n", 1);
		a++;
	}
}
