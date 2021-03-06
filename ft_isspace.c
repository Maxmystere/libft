/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magrab <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 15:18:55 by magrab            #+#    #+#             */
/*   Updated: 2018/11/15 15:24:38 by magrab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** #include "libft.h"
*/

int		ft_isspace(int c)
{
	if (c == ' '
			|| c == '\t'
			|| c == '\n'
			|| c == '\v'
			|| c == '\f'
			|| c == '\r')
		return (1);
	return (0);
}
