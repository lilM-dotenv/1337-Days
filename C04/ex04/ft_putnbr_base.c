/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 14:13:52 by mlabbi            #+#    #+#             */
/*   Updated: 2026/08/23 00:18:44 by mlabbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	base_checker(char *str)
{
	int	i;
	int	size;
	int	j;

	i = 0;
	size = ft_strlen(str);
	if (size <= 1)
		return (0);
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[j] == str[i] || str[j] == '+' || str[j] == '-')
				return (0);
			j++;
		}
		i++;
	}
	return (size);
}

void	base_converter(long nbr, int size, char *base)
{
	int	k;

	if (nbr >= size)
		base_converter(nbr / size, size, base);
	k = nbr % size;
	write(1, &base[k], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;
	long	n;

	n = nbr;
	size = base_checker(base);
	if (size == 0)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		n = -nbr;
	}
	base_converter(n, size, base);
}
