/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 15:34:49 by mlabbi            #+#    #+#             */
/*   Updated: 2026/08/30 16:10:08 by mlabbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_base_is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i] || base[j] <= 32
				||base[j] == '+' || base[j] == '-')
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_atoi(char *str, char *base, int size)
{
	int	i;
	int	j;
	int	signe;
	int	key;
	int	nbr;

	signe = 1;
	i = 0;
	nbr = 0;
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe = -signe;
		i++;
	}
	while (str[i])
	{
		key = 1;
		j = 0;
		while (size > j)
		{
			if (str[i] == base[j])
			{
				nbr = nbr * size + j;
				key = 0;
				break ;
			}
			j++;
		}
		if (key == 1)
			return (signe * nbr);
		i++;
	}
	return (signe * nbr);
}

int	ft_atoi_base(char *str, char *base)
{
	int	size;
	int	i;

	size = ft_base_is_valid(base);
	if (size < 2)
		return (0);
	i = ft_atoi(str, base, size);
	return (i);
}
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_atoi_base("   +---+aehdg", "abcdefgh"));	
}
