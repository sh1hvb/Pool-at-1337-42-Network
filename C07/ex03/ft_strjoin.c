/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:32:49 by mchihab           #+#    #+#             */
/*   Updated: 2023/09/30 20:10:06 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	copystrings(char *result, char **strs, char *sep, int size)
{
	int	a;
	int	i;
	int	j;

	a = 0;
	i = 0;
	j = 0;
	while (i < size && strs && strs[i])
	{
		j = 0;
		while (strs[i][j])
			result[a++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			result[a++] = sep[j++];
		i++;
	}
	result[a] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		lenn;
	int		i;
	char	*result;

	if (size == 0)
		return (NULL);
	lenn = ft_strlen(sep) * (size - 1);
	i = 0;
	while (i < size && strs && strs[i])
		lenn += ft_strlen(strs[i++]);
	result = malloc(sizeof(char) * (lenn + 1));
	if (!result)
		return (NULL);
	copystrings(result, strs, sep, size);
	return (result);
}

/*int	main(void)

{
	char	**strs;
	char	*a;

	strs = malloc(sizeof(char *) * 2);
	strs[0] = "habibi";
	strs[1] = "come";
	a = ft_strjoin(2, strs, "abc");
	printf("%s", a);
	free(strs);
	free(a);
	return (0);
}*/
