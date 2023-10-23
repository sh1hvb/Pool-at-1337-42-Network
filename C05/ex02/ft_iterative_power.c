/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 23:56:23 by mchihab           #+#    #+#             */
/*   Updated: 2023/09/25 01:43:29 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	result = 1;
	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i <= power)
	{	
		result *= nb;
		i++;
	}
	return (result);
}
/*int main ()
{
	printf("%d",ft_iterative_power(2,0));
}*/
