/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 20:54:48 by mchihab           #+#    #+#             */
/*   Updated: 2023/09/16 14:29:30 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			ft_putchar('0' + first / 10);
			ft_putchar('0' + first % 10);
			ft_putchar(' ');
			ft_putchar('0' + second / 10);
			ft_putchar('0' + second % 10);
			if (first != 98)
			{
				ft_putchar(',');
			}
			second++;
		}
		first++;
	}
}
