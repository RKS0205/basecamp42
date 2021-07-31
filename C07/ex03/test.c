#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int		main(void)
{
	int		a;
	char	**strs;
	char	*test;

	strs = malloc(3 * sizeof(char *));
	if (strs == NULL)
		return (1);
	a = 0;
	while (a < 3)
	{
		strs[a] = "abc";
		a++;
	}
	test = ft_strjoin(3, strs, ", ");
	if (test == NULL)
		return (1);
	printf("%s \n", test);
	free(strs);
	free(test);
	return (0);
}