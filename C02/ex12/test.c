#include <unistd.h>
#include <stdio.h>

void	ft_print_memory(char *addr, unsigned int size);

int	main(void)
{
	ft_print_memory("Bonjour les amin", 16);
	printf ("\n");
	ft_print_memory("\n\nlol\nlol\n \n", 12);
	printf ("\n");
	return (0);
}