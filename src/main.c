/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 17:55:07 by adhondt           #+#    #+#             */
/*   Updated: 2018/05/24 11:18:40 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int			main(int argc, char **argv)
{
	t_pm	*s;

	init_s(&s, argc, argv);
	ft_putinttab(s->a, argc - 1, "\n");
	run_checker(s);
	free(s->a);
	free(s->b);
	free(s);
	return (0);
}
