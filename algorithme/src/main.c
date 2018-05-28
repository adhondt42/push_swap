/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 17:55:07 by adhondt           #+#    #+#             */
/*   Updated: 2018/05/29 00:05:36 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int			get_imediane(t_pm *s)
{
	int		*cpy;
	int		med;

	cpy = copy_inttab(s->a, s->alen);
	quick_sort(cpy, s->alen);
	ft_putinttab(cpy, s->alen, "\n");
	med = cpy[(s->alen / 2)];
	return (med);
}

void		create_b(t_pm *s)
{
	int		i;

	i = -1;
	while (++i < s->alen)
	{
		if (s->a[i] >= s->med)
			place_b(s, i);
	}
}

void		run_algo(t_pm *s)
{
	s->med = get_imediane(s);
	create_b(s);

}

int			main(int argc, char **argv)
{
	t_pm	*s;

	int_verification(argv, argc);
	init_s(&s, argc, argv);
	doublon_verification(s);
	run_algo(s);
	free(s->a);
	free(s->b);
	free(s);
	return (0);
}
