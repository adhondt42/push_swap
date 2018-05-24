/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 10:05:57 by adhondt           #+#    #+#             */
/*   Updated: 2018/05/24 11:39:17 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void		cmd_sa(t_pm *s)
{
	ft_putstr("sa Yes!\n");
}

void		cmd_sb(t_pm *s)
{
	ft_putstr("sb Yes!\n");
}

void		run_checker(t_pm *s)
{
	int		i;
	char	*line;
	void	(*f[12])(t_pm *);
	static char *cmd_list[12] = {"sa", "sb", "ss", "pa", "pb", "ra",
		"rb", "rr", "rra", "rrb", "rrr", "end"};

	i = 0;
	init_f(f);
	while (get_next_line(0, &line) > 0)
	{
		i++;
		if ((i = pos_str_tab(line, cmd_list)) >= 0)
			f[i](s);
		//else
		//{
		//	ft_putstr("error");
		//	exit(0);
		//}
	}
		ft_putstr(line);
		ft_putnbr(i);
}
