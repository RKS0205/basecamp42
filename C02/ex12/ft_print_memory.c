#include <unistd.h>
#include <stdio.h>

const char	g_hex[16] = "0123456789abcdef";

void	hex_transform(unsigned char i)
{
	int	h;

	h = g_hex[(i / 16)];
	write (1, &h, 1);
	h = g_hex[i % 16];
	write (1, &h, 1);
}

void	hex_transform_mem(size_t addr, unsigned char address[15])
{
	int	a;

	a = 14;
	while (a >= 0)
	{
		address[a] = g_hex[addr % 16];
		addr /= 16;
		a--;
	}
	write (1, address, 15);
	write (1, ": ", 2);
}

void	hex_write(unsigned char *i, unsigned int b, unsigned int size)
{
	while (b < size)
	{
		hex_transform(*i);
		i++;
		b++;
		if (b % 2 == 0)
			write (1, " ", 1);
	}
}

void	put_spaces(unsigned int space)
{
	while (space > 0)
	{
		write (1, " ", 1);
		space--;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*i;
	unsigned int	b;
	unsigned int	space;
	unsigned char	address[15];

	space = 16 - size;
	i = addr;
	b = 0;
	hex_transform_mem((size_t)addr, address);
	hex_write(i, b, size);
	put_spaces(space);
	i = addr;
	b = 0;
	while (b < size)
	{
		if (*i < 32 || *i > 126)
			write (1, ".", 1);
		else
			write (1, i, 1);
		i++;
		b++;
	}
	return (addr);
}
