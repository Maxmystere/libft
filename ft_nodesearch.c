/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nodesearch.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 14:41:05 by tferrieu          #+#    #+#             */
/*   Updated: 2019/02/14 14:56:26 by tferrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_tab	ft_nodesearch(t_tab node, int elem)
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
