/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkenji-s <rkenji-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 23:42:32 by rkenji-s          #+#    #+#             */
/*   Updated: 2021/07/21 23:42:33 by rkenji-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	my_loop(int size, int *tab, int b)
{
	while (size > 0)
	{
		if (*tab > *(tab + 1))
		{
			b = *(tab + 1);
			*(tab + 1) = *tab;
			*tab = b;
		}
		tab++;
		size--;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	*c;
	int	d;

	b = 0;
	a = size;
	c = tab;
	d = size;
	while (a > 0)
	{
		tab = c;
		size = d;
		my_loop(size, tab, b);
		a--;
	}
}
