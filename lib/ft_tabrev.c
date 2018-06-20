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

char	**ft_tabrev(char **tab, int len)
{
	int		i;
	int		n;
	char	*tmp;

	i = 0;
	n = len - 1;
	while (i < n)
	{
		tmp = tab[i];
		tab[i] = tab[n];
		tab[n] = tmp;
		i++;
		n--;
	}
	return (tab);
}
