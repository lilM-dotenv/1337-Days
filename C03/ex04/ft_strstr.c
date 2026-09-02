/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 21:57:32 by mlabbi            #+#    #+#             */
/*   Updated: 2026/08/20 15:49:41 by mlabbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	l;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		l = 0;
		if (str[i] == to_find[l])
		{
			while (str[i + l] == to_find[l] && to_find[l] != '\0')
			{
				l++;
			}
			if (to_find[l] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
