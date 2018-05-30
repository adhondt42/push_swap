/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 17:55:07 by adhondt           #+#    #+#             */
/*   Updated: 2018/05/30 16:40:19 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void			print_answer(t_pm *s, int *a, int alen)
{
	quick_sort(a, alen);
	if (ft_inttab_cmp(s->a, s->alen, a, alen) != -1)
	{
		ft_putstr("KO\n");
		return;
	}
	else
		ft_putstr("OK\n");
	return ;
}

int				main(int argc, char **argv)
{
	t_pm		*s;
	int			*copy;
	int			copylen;

	int_verification(argv, argc);
	init_s(&s, argc, argv);
	doublon_verification(s);
	copy = copy_inttab(s->a, s->alen);
	copylen = s->alen;
	run_checker(s);
	print_answer(s, copy, copylen);
	free(copy);
	free(s->a);
	free(s->b);
	free(s);
	return (0);
}
