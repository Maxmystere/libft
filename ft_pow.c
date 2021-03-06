/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magrab <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 17:09:49 by magrab            #+#    #+#             */
/*   Updated: 2019/01/18 17:12:06 by magrab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_pow(int nb, int pow)
{
	int i;
	int n;

	if (pow < 0)
		return (0);
	n = 1;
	i = 0;
	while (i++ < pow)
		n *= nb;
	return (n);
}
