/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_inttab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 13:06:08 by adhondt           #+#    #+#             */
/*   Updated: 2018/06/20 13:06:15 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int		*ft_intnew(size_t size, int value)
{
	size_t	i;
	int		*new;

	if ((new = (int *)malloc(sizeof(int) * size)) == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		new[i] = value;
		i++;
	}
	return (new);
}
