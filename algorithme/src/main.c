/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 17:55:07 by adhondt           #+#    #+#             */
/*   Updated: 2018/05/29 18:23:23 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int			get_imediane(t_pm *s, char c)
{
	int		*cpy;
	int		med;

	if (c == 'a')
	{
		if (s->alen == 2)
			med = s->a[0] < s->a[1] ? s->a[0] : s->a[1];
		else
		{
			cpy = copy_inttab(s->a, s->alen);
			quick_sort(cpy, s->alen);
			med = cpy[(s->alen / 2)];
		}
	}
	else
	{
		if (s->blen == 2)
			med = s->b[0] < s->b[1] ? s->b[0] : s->b[1];
		{
			cpy = copy_inttab(s->b, s->blen);
			quick_sort(cpy, s->blen);
			med = cpy[(s->blen / 2)];
		}
	}
	return (med);
}

void		create_b(t_pm *s)
{
	int		i;
	int		j;
	int		bmed;

	s->med = get_imediane(s, 'a');
	j = s->alen;
	i = -1;
	while (++i <= j)
	{
		if (s->a[0] >= s->med)
		{
			cmd_p(s, 4);
			bmed = get_imediane(s, 'b');
			if (s->b[0] >= bmed)
				cmd_r(s, 6);
		}
		else
			cmd_r(s, 5);
	}
}

void		run_algo(t_pm *s)
{
	create_b(s);

}

int			main(int argc, char **argv)
{
	t_pm	*s;

	int_verification(argv, argc);
	init_s(&s, argc, argv);
	doublon_verification(s);
	run_algo(s);
	ft_putinttab(s->a, s->alen, " ->a\n");
	ft_putinttab(s->b, s->blen, " -->b\n");
	printf("\nNombre d'instructions : %d\n", s->cmd_nbr);
	free(s->a);
	free(s->b);
	free(s);
	return (0);
}
