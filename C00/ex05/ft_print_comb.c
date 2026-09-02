/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 10:36:36 by mlabbi            #+#    #+#             */
/*   Updated: 2026/08/18 15:52:44 by mlabbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		ft_print(a, b, c);
		if (a != '7' )
			write(1, ", ", 2);
		if (b == '8' && c == '9' )
		{
			a++;
			b = a + 1;
			c = b;
		}
		else if (c == '9' )
		{
			b++;
			c = b;
		}
		c++;
	}	
}
int	main()
{
	ft_print_comb();
}
