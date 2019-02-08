/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_noderm_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 18:26:52 by tferrieu          #+#    #+#             */
/*   Updated: 2019/02/08 18:30:01 by tferrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_noderm_int(t_tab start, int elem)
{
	t_tab pos;

	pos = start;
	while (pos)
	{
		if (pos->data == elem)
		{
			ft_noderm(pos);
			return (1);
		}
		pos = pos->next;
	}
	return (0);
}
