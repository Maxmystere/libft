/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2dchar_make.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magrab <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/06 17:33:36 by magrab            #+#    #+#             */
/*   Updated: 2019/01/08 18:03:15 by magrab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_2dchar_make(int x, int y, char c)
{
	char	**map;
	int		v;

	if (!(map = malloc((x + 1) * sizeof(char *))))
		return (NULL);
	map[x] = NULL;
	v = 0;
	while (v < x)
	{
		if (!(map[v] = ft_strnew_set(c, y)))
			return (NULL);
		v++;
	}
	return (map);
}
