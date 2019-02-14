/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nodesearch_int.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 16:24:37 by tferrieu          #+#    #+#             */
/*   Updated: 2019/02/14 16:24:38 by tferrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_tab	ft_nodesearch(t_tab node, t_type elem)
{
	t_tab pos;

	pos = node;
	while (pos->prvs)
	{
		if (pos->data == elem)
			return (pos);
		pos = pos->prvs;
	}
	pos = node;
	while (pos->next)
	{
		if (pos->data == elem)
			return (pos);
		pos = pos->next;
	}
	return (NULL);
}
