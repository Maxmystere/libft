/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 18:06:39 by tferrieu          #+#    #+#             */
/*   Updated: 2019/01/18 18:43:32 by tferrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_htoi(char *hex)
{
	int		val;
	int		nb;
	int		i;

	if (!hex || ft_strlen(hex) > 8 || (ft_strlen(hex) == 8 && hex[0] > '7'))
		return (0);
	nb = 0;
	i = 0;
	while ((hex[i] > 8 && hex[i] < 14) || hex[i] == 32)
		i++;
	while (hex[i])
	{
		if (hex[i] >= '0' && hex[i] <= '9')
			val = hex[i] - '0';
		else if (hex[i] >= 'a' && hex[i] < 'g')
			val = hex[i] - 'a' + 10;
		else if (hex[i] >= 'A' && hex[i] < 'G')
			val = hex[i] - 'A' + 10;
		else
			break;
		nb = nb * 16 + val;
		i++;
	}
	return (nb);
}
