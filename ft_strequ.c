/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magrab <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 15:23:12 by magrab            #+#    #+#             */
/*   Updated: 2018/11/15 15:24:38 by magrab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** #include "libft.h"
*/

int		ft_strequ(char const *s1, char const *s2)
{
	if (s1 && s2 && *s1 == 0 && *s2 == 0)
		return (1);
	if (s1 && s2 && *s1 == *s2)
		return (ft_strequ(s1 + 1, s2 + 1));
	return (0);
}
