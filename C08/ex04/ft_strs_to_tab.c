/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:27:06 by mchihab           #+#    #+#             */
/*   Updated: 2023/10/02 17:05:16 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		i;

	i = 0;
	cpy = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!cpy)
		return (NULL);
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*arr;

	arr = (struct s_stock_str *)malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		if (!arr[i].copy)
		{
			while (i-- >= 0)
				free(arr[i].copy);
			free(arr);
			return (NULL);
		}
		i++;
	}
	arr[i].str = 0;
	return (arr);
}
/*
int	main(int argc, char **argv) {
	if (argc < 2) {
		printf("Usage: %s <string1> <string2> ...\n", argv[0]);
		return (1);
	}

	struct s_stock_str *result = ft_strs_to_tab(argc - 1, argv + 1);

	if (!result) {
		printf("Memory allocation error\n");
		return (1);
	}

	printf("Result:\n");
	for (int i = 0; result[i].str != NULL; i++) {
		printf("String: %s\n", result[i].str);
		printf("Size: %d\n", result[i].size);
		printf("Copy: %s\n\n", result[i].copy);
	}

	for (int i = 0; result[i].str != NULL; i++) {
		free(result[i].copy);
	}
	free(result);

	return (0);
}*/
