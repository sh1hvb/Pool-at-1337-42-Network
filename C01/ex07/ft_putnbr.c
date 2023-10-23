/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:48:14 by mchihab           #+#    #+#             */
/*   Updated: 2023/09/16 14:59:19 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr >= 0 && nbr < 10)
	{
		ft_putchar('0' + nbr);
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr ;
		ft_putnbr(nbr);
	}
	else if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else if (nbr == -2147483647)
	{
		ft_putchar('-');
		ft_putnbr(2147483647);
	}
	else if (nbr == 2147483647)
	{
		ft_putnbr(2147483647);
	}
}
