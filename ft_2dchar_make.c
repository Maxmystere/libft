/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2dchar_make.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magrab <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/06 17:33:36 by magrab            #+#    #+#             */
/*   Updated: 2019/01/06 17:45:22 by magrab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_2dchar_make(int x, int y)
{
	char	**map;
	int		v;

	if (!(map = malloc((x + 1) * sizeof(char *))))
		return (NULL);
	map[x] = NULL;
	v = 0;
	while (v < x)
	{
		if (!(map[v] = ft_strnew(y + 1)))
			return (NULL);
		v++;
	}
	return (map);
}
