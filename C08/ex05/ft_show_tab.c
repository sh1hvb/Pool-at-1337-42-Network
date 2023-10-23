/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:28:34 by mchihab           #+#    #+#             */
/*   Updated: 2023/10/02 16:35:38 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

/*#include <stdlib.h>
#include "ft_stock_str.h"
int	ft_strlen(char *str)
{
	int	i;

	i =0;
	while(str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		i;

	i = 0;
	cpy = (char *)malloc(sizeof(char) * ft_strlen(src) + 1 );
	if(!cpy)
		return (NULL);
	while(src[i]){
		cpy[i] = src[i];
		i++;
	}
	cpy[i]='\0';
	return (cpy);
}
struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*arr;

	arr = (struct s_stock_str *)malloc((ac + 1) * sizeof(struct s_stock_str));
	if(!arr)
		return (NULL);
	i = 0;
	while(i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		if(!arr[i].copy)
		{
			while(i-- >= 0)
				free(arr[i].copy);
			free(arr);
			return (NULL);
		}
		i++;
	}
	arr[i].str = 0;
	return (arr);
}*/
//------------------------
void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putnbr(int n)
{
	char	c;

	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	c = n % 10 + '0';
	write(1, &c, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str)
	{
		ft_putstr(par->str);
		write(1, "\n", 1);
		ft_putnbr(par->size);
		write(1, "\n", 1);
		ft_putstr(par->copy);
		write(1, "\n", 1);
		par++;
	}
}

/*void ft_show_tab(struct s_stock_str *par)
{
	int i ;
	int j ;
	while(par[i][j])
	{
		j = 0;
		while(par[i][j])
		{
			write(1,par[i][j].size,1);
			write(1,"\n",1);
			write(1,par[i][j].str,1);
			write(1,"\n".size,1);
			write(1,par[i][j].copy,1);
			write(1,"\n".size,1);
			j++;
		}
	} i++;
}*/
/*#include <stdio.h>
#include "ft_stock_str.h"

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

	ft_show_tab(result);

	return (0);
}*/
