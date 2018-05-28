/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 10:05:57 by adhondt           #+#    #+#             */
/*   Updated: 2018/05/24 16:40:05 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void		run_checker(t_pm *s)
{
	int		i;
	char	*line;
	void	(*f[13])(t_pm *, int);
	static char *cmd_list[12] = {"sa", "sb", "ss", "pa", "pb", "ra",
		"rb", "rr", "rra", "rrb", "rrr", "end"};

	i = 0;
	init_f(f);
	while (get_next_line(0, &line) > 0)
	{
		if ((i = pos_str_tab(line, cmd_list)) >= 0)
			f[i](s, i);
		else
			ft_error();
	}
	ft_putstr("Tab A :\n");
	ft_putinttab(s->a, s->alen, "\n");
	ft_putstr("\nTab B :\n");
	ft_putinttab(s->b, s->blen, "\n");
}
