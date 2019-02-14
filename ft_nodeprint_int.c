/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nodeprint_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 16:19:48 by tferrieu          #+#    #+#             */
/*   Updated: 2019/02/14 16:19:50 by tferrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_nodeprint_int(t_tab node)
{
	t_tab pos;

	pos = node;
	while (pos->prvs)
		pos = pos->prvs;
	while (pos)
	{
		ft_printf("%d",pos->data);
		if (pos->next)
			ft_printf(" | ");
		pos = pos->next;
	}
}
