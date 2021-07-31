/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkenji-s <rkenji-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 23:42:03 by rkenji-s          #+#    #+#             */
/*   Updated: 2021/07/21 23:42:04 by rkenji-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	cont;
	int	sub;

	cont = size;
	while (size > 0)
	{
		sub = *tab;
		*tab = *(tab + (size - 1));
		*(tab + (size - 1)) = sub;
		size = size - 2;
		tab++;
		cont--;
	}
}
