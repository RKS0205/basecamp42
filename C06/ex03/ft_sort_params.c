#include <unistd.h>

void	my_write(int argc, char **argv, int a, int b)
{
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

int	main(int argc, char **argv)
{
	int		a;
	int		b;
	int		c;
	char	*temp;

	a = 1;
	while (c < argc - 1)
	{
		a = 0;
		while (a < argc - 1)
		{
			if (argv[a][0] > argv[a + 1][0])
			{
				temp = argv[a + 1];
				argv[a + 1] = argv[a];
				argv[a] = temp;
			}
			a++;
		}
		c++;
	}
	a = 1;
	my_write(argc, argv, a, b);
}
