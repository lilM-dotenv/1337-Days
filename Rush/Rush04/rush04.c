/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 15:12:35 by mlabbi            #+#    #+#             */
/*   Updated: 2026/08/16 15:23:14 by mlabbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rushX(int x, int y)
{
	if (x == 1)
		while ()
		{
			
		}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	if (x <= 0 || y <= 0)
		return ;
	if ((x == 1 && y != 1) || (x != 1 && y == 1))
		rushX(x, y);
	while (y >= i)
	{
		j = 1;
		while (x >= j)
		{
			if ((j == 1 && i == 1) || (j == x && i == y))
				ft_putchar('A');
			else if ((j == 1 && i == y) || (j == x && i == 1))
				ft_putchar('C');
			else if (i == 1 || i == y || j == 1 || j == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
