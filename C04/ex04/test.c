#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);

int main(void)
{
	int nbr;
	char base[] = "0123456789abcdef";

	nbr = 438;

	ft_putnbr_base(nbr, base);
}