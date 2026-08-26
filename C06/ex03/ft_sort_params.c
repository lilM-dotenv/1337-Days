/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 18:36:52 by mlabbi            #+#    #+#             */
/*   Updated: 2026/08/23 18:37:37 by mlabbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	if (s1[i] - s2[i] >= 0)
		return (0);
	else
		return (1);
}

void	swap(int i, char **argv)
{
	char	*tmp;

	tmp = argv[i];
	argv[i] = argv[i + 1];
	argv[i + 1] = tmp;
}

void	print_params(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argc > i)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	key;
	int	k;

	k = argc;
	while (k > 0)
	{
		i = 1;
		while (argc - 1 > i)
		{
			key = ft_strcmp(argv[i], argv[i + 1]);
			if (key == 0)
				swap(i, (argv));
			i++;
		}
		k--;
	}
	print_params(argc, (argv));
}
