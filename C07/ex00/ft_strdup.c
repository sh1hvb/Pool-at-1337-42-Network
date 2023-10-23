/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchihab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:19:39 by mchihab           #+#    #+#             */
/*   Updated: 2023/09/30 20:05:50 by mchihab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return (i);
}

char *ft_strdup(char *src)
{
    char *str;
    int i = 0;

    str = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1)); // Corrected allocation size
    if (!str)
        return (NULL);
    while (src[i]) // Removed the extra src++ here
    {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}

