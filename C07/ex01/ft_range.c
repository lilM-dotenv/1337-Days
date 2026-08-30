/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 04:37:14 by mlabbi            #+#    #+#             */
/*   Updated: 2026/08/27 10:25:42 by mlabbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*arr;
	int	i;

	i = 0;
	if (max <= min)
		return (NULL);
	len = max - min;
	arr = malloc(sizeof(int) * len);
	if (!arr)
		return (NULL);
	while (max > min + i)
	{
		*(arr + i) = min + i;
		i++;
	}
	return (arr);
}
