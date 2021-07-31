/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkenji-s <rkenji-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 00:14:05 by rkenji-s          #+#    #+#             */
/*   Updated: 2021/07/20 14:43:53 by rkenji-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	int	a;
	int	array[9];

	a = 0;
	array[0] = '0';
	while ((array[n - 1] != '9') && (array[0] != '7'))
	{
		while (a < n)
		{
			if (array[a] < '0' && array[a] > '9')
			{
				array[a] = array[a - 1] + 1;
			}
			else if (array[a] < array[a - 1])
			{
				array[a] = array[a - 1] + 1;
			}
			write (1, &array[a], 1);
			a++;
		}
	}
}
