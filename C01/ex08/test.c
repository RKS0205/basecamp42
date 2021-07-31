/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkenji-s <rkenji-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 23:42:01 by rkenji-s          #+#    #+#             */
/*   Updated: 2021/07/21 23:42:02 by rkenji-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int *tab;
	int counter;

	srand(1);
	counter = 0;
	tab = calloc(10, sizeof(int));
	while (counter < 10)
	{
		tab[counter] = rand() % 100;
		counter++;
	}
	counter = -1;
	while (9 > counter++)
		printf("%d ", tab[counter]);
	ft_sort_int_tab(tab, 10);
	printf("%c", '\n');
	counter = -1;
	while (9 > counter++)
		printf("%d ", tab[counter]);
	printf("%c", '\n');
	return (0);
}