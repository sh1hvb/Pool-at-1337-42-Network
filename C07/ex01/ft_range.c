/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:53:09 by mchihab           #+#    #+#             */
/*   Updated: 2023/10/01 13:32:22 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;

	p = NULL;
	i = 0;
	if (min >= max)
		return (p);
	p = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}
/*#include <stdio.h>


int	main(void)
{
	int min = 5;
	int max = 15;
	int *result = ft_range(min, max);

	if (result)
	{
		for (int i = 0; i < max - min; i++)
		{
			printf("%d ", result[i]);
		}
		free(result);
			// Don't forget to free the allocated memory when you're done!
	}
	else
	{
		printf("Allocation failed.\n");
	}

	return (0);
}*/
