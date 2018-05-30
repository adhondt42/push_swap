/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 17:55:07 by adhondt           #+#    #+#             */
/*   Updated: 2018/05/30 14:30:19 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int			get_imediane(int *a, int alen)
{
	int		*cpy;
	int		med;

		if (alen == 2)
			med = a[0] < a[1] ? a[0] : a[1];
		else
		{
			cpy = copy_inttab(a, alen);
			quick_sort(cpy, alen);
			med = cpy[(alen / 2)];
		}
	return (med);
}

void		create_b(t_pm *s)
{
	int		i;
	int		j;
	int		bmed;

	s->med = get_imediane(s->a, s->alen);
	j = s->alen;
	i = -1;
	while (++i <= j)
	{
		if (s->a[0] >= s->med)
		{
			cmd_p(s, 4);
			ft_putstr("pb\n");
			bmed = get_imediane(s->b, s->blen);
			if (s->b[0] >= bmed)
			{
				cmd_r(s, 6);
			ft_putstr("rb\n");
			}
		}
		else
		{
			cmd_r(s, 5);
			ft_putstr("ra\n");
		}
	}
}

void		run_algo(t_pm *s)
{
	create_b(s);
	organize_a(s);
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
