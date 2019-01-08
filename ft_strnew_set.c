/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew_set.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magrab <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 17:48:15 by magrab            #+#    #+#             */
/*   Updated: 2019/01/08 17:48:23 by magrab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew_set(char c, size_t size)
{
	char	*tmp;

	if (!(tmp = (char *)malloc(++size * sizeof(char))))
		return (NULL);
	tmp[--size] = '\0';
	while (size-- > 0)
		tmp[size] = c;
	return (tmp);
}
