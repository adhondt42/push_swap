/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_initialization.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 18:57:03 by adhondt           #+#    #+#             */
/*   Updated: 2018/05/24 16:19:52 by adhondt          ###   ########.fr       */
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

void	init_f(void (*f[13])(t_pm *s, int i))
{
	f[0] = cmd_s;
	f[1] = cmd_s;
	f[2] = cmd_s;
	f[3] = cmd_p;
	f[4] = cmd_p;
	f[5] = cmd_r;
	f[6] = cmd_r;
	f[7] = cmd_r;
	f[8] = cmd_rr;
	f[9] = cmd_rr;
	f[10] = cmd_rr;

}
