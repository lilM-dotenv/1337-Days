/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 09:20:14 by mlabbi            #+#    #+#             */
/*   Updated: 2026/08/27 10:29:40 by mlabbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str, char **strs, int size)
{
	int	i;
	int	len;
	int	j;

	j = 0;
	i = 0;
	while (str[i])
		i++;
	len = i * (size - 1);
	while (size > j)
	{
		i = 0;
		while (strs[j][i])
			i++;
		j++;
		len = len + i;
	}
	return (len);
}

char	*concatination(char **strs, int size, char *sep, char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (size > i)
	{
		j = 0;
		while (strs[i][j])
		{
			str[k] = strs[i][j];
			k++;
			j++;
		}
		j = 0;
		while (sep[j] && size - 1 > i)
		{
			str[k] = sep[j];
			k++;
			j++;
		}
		i++;
	}
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		len;

	if (size == 0)
	{
		str = malloc(sizeof(char));
		if (!str)
			return (0);
		str[0] = '\0';
		return (str);
	}
	len = ft_strlen(sep, strs, size);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str = concatination(strs, size, sep, str);
	return (str);
}
