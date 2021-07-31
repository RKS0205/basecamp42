/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkenji-s <rkenji-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 23:42:08 by rkenji-s          #+#    #+#             */
/*   Updated: 2021/07/21 23:42:09 by rkenji-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	a;

	a = *str;
	while (a != 0)
	{
		write (1, &a, 1);
		str = str + 1;
		a = *str;
	}
}