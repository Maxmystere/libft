/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2dchar_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magrab <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/06 19:00:16 by magrab            #+#    #+#             */
/*   Updated: 2019/01/08 17:58:24 by magrab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_2dchar_print(char **map)
{
	int x;

	if (map)
	{
		x = 0;
		while (map[x])
		{
			ft_putstr(map[x]);
			ft_putchar('\n');
			x++;
		}
	}
}
