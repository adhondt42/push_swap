/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_initialization.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 18:57:03 by adhondt           #+#    #+#             */
/*   Updated: 2018/05/23 19:32:11 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	init_s(t_pm **s, int argc, char **argv)
{
	int	i;

	i = -1;
	if (!(*s = (t_pm *)malloc(sizeof(t_pm))))
		return ;
	(*s)->a = ft_intnew(argc - 1, 0);
	(*s)->b = ft_intnew(argc - 1, 0);
	(*s)->alen = argc -1;
	(*s)->blen = 0;
	while (++i < argc - 1)
		(*s)->a[i] = ft_atoi(argv[i + 1]);
}
