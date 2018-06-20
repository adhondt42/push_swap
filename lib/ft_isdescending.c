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

int		ft_isdescending(int *stack, int max)
{
	int i;

	i = max - 1;
	if (stack)
	{
		while (i != 0)
		{
			if (stack[i - 1] < stack[i])
				return (0);
			i--;
		}
	}
	return (1);
}
