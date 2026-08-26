/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 14:22:08 by mlabbi            #+#    #+#             */
/*   Updated: 2026/08/16 14:53:26 by mlabbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (y >= i)
	{
		j = 1;
		while (x >= j)
		{
			if ((j == 1 && i == 1) || (j == x && i == y))
				ft_putchar('/');
			else if ((j == 1 && i == y) || (j == x && i == 1))
				ft_putchar('\\');
			else if (j == 1 || j == x || i == 1 || i == y)
				ft_putchar('*');
			else if ((j == 1 && i == y) || (j == x && i == 1))
				ft_putchar('\\');
			else if ((j == 1 && i == 1) || (j == x && i == y))
				ft_putchar('/');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
