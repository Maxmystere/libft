/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_noderm_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 18:26:52 by tferrieu          #+#    #+#             */
/*   Updated: 2019/02/14 16:21:14 by tferrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_noderm_int(t_tab *start, t_type elem)
{
	t_tab pos;

	if (!start || !(*start))
		return (-1);
	if ((*start)->next == NULL || (*start)->data == elem)
	{
		ft_noderm(start);
		return (1);
	}
	pos = *start;
	while (pos)
	{
		if (pos->data == elem)
		{
			ft_noderm(&pos);
			return (1);
		}
		pos = pos->next;
	}
	return (0);
}
