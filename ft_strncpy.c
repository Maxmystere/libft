/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magrab <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 15:23:29 by magrab            #+#    #+#             */
/*   Updated: 2018/11/15 15:24:38 by magrab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t x;

	x = 0;
	while (src[x] && x < n)
	{
		dst[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dst[x] = 0;
		x++;
	}
	return (dst);
}
