/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 22:41:28 by mlabbi            #+#    #+#             */
/*   Updated: 2026/08/14 23:33:09 by mlabbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;
	int	tmp2;
	int	k;

	k = size;
	while (k > 0)
	{
		i = 0;
		while (size - i - 1 > 0)
		{
			tmp = tab[i];
			if (tmp > tab[i + 1])
			{
				tmp2 = tab[i + 1];
				tab[i + 1] = tmp;
				tab[i] = tmp2;
			}
			i++;
		}
		i = 0;
		k--;
	}
}
