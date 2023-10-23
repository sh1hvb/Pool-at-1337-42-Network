/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 19:40:48 by mchihab           #+#    #+#             */
/*   Updated: 2023/09/24 13:24:55 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	cond;
	int	result;

	i = 0;
	cond = 1;
	while (str[i] != 0)
	{
		while (str[i] >= 0 && str[i] <= 32)
		{
			i++;
		}
		if (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				cond *= -1;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			result = result * 10 + (str[i] - '0');
		else
			break ;
		i++;
	}
	return (result * cond);
}
/*int main()
{
    int i = ft_atoi("       \t\n\t\n------1234ab567");
    printf("%d",i);
}*/
