/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 21:04:46 by mchihab           #+#    #+#             */
/*   Updated: 2023/09/23 13:54:37 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlower(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	ft_strlower(str);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			j = 1;
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (j == 0)
			{
				str[i] -= 32;
				j = 1;
			}
		}
		else
			j = 0;
		i++;
	}
	return (str);
}
