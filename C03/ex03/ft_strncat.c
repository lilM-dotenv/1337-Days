/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 21:29:49 by mlabbi            #+#    #+#             */
/*   Updated: 2026/08/21 00:19:58 by mlabbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	l;
	unsigned int	i;

	l = 0;
	i = 0;
	while (dest[l] != '\0')
		l++;
	while (src[i] != '\0' && nb > i)
	{
		dest[l] = src[i];
		l++;
		i++;
	}
	dest[l] = '\0';
	return (dest);
}
