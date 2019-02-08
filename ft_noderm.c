/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_noderm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 18:05:03 by tferrieu          #+#    #+#             */
/*   Updated: 2019/02/08 18:44:34 by tferrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_noderm(t_tab node)
{
	t_tab	prev;
	t_tab	next;

	prev = NULL;
	next = NULL;
	if (!node)
		return ;
	if (node->prvs)
		prev = node->prvs;
	if (node->next)
		next = node->next;
	free(node);
	if (prev)
		prev->next = next;
	if (next)
		next->prvs = prev;
}
