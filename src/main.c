/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 17:55:07 by adhondt           #+#    #+#             */
/*   Updated: 2018/05/24 14:57:07 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"


void		data_verification(char **argv)
{
	

}

int			main(int argc, char **argv)
{
	t_pm	*s;

//	data_verification(argv);
	init_s(&s, argc, argv);
	ft_putinttab(s->a, argc - 1, "\n");
	run_checker(s);
	free(s->a);
	free(s->b);
	free(s);
	return (0);
}
