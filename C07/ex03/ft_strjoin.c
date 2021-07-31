#include <stdlib.h>

int	my_count(int size, char **strs, char *sep)
{
	int	count;
	int	a;
	int	b;

	a = 0;
	count = 0;
	while (a < size)
	{
		b = 0;
		while (strs[a][b] != '\0')
		{
			count++;
			b++;
		}
		b = 0;
		while (sep[b] != '\0')
		{
			count++;
			b++;
		}
		a++;
	}
	return (count);
}

void	my_cat(int size, char **strs, char *sep, char *str)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	c = 0;
	while (a < size)
	{
		b = 0;
		while (strs[a][b] != '\0')
		{
			str[c] = strs[a][b];
			b++;
			c++;
		}
		b = 0;
		while (sep[b] != '\0' && a < size - 1)
		{
			str[c] = sep[b];
			c++;
			b++;
		}
		a++;
	}
	str[c] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;

	str = malloc (my_count(size, strs, sep) * sizeof(char));
	my_cat(size, strs, sep, str);
	return (str);
}
