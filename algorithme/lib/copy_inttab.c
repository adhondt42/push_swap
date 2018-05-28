/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_inttab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 23:22:21 by adhondt           #+#    #+#             */
/*   Updated: 2018/05/28 23:22:56 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int			*copy_inttab(int *a, int alen)
{
	int		i;
	int		*dest;

	i = -1;
	dest = ft_intnew(alen, 0);
	while (++i < alen)
		dest[i] = a[i];
	return (dest);
}
