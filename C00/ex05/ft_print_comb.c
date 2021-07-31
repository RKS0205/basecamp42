/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkenji-s <rkenji-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 22:03:24 by rkenji-s          #+#    #+#             */
/*   Updated: 2021/07/16 22:03:25 by rkenji-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int a, int b, int c)
{
	while (b < '9')
	{
		write (1, &a, 1);
		write (1, &b, 1);
		write (1, &c, 1);
		if (a < '7')
		{
			write (1, ", ", 2);
		}
		c++;
		if (c > '9')
		{
			b++;
			c = b + 1;
		}
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		ft_print(a, b, c);
		a++;
		b++;
		c++;
	}
}
