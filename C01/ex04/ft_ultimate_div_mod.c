/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkenji-s <rkenji-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 23:42:14 by rkenji-s          #+#    #+#             */
/*   Updated: 2021/07/21 23:42:15 by rkenji-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	res;

	div = *a / *b;
	res = *a % *b;
	*a = div;
	*b = res;
}