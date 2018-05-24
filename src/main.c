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

void			arg_error(int n)
{
	if (n == 1)
		ft_putstr("Arguments error : Only digits\n");
	if (n == 2)
		ft_putstr("Arguments error : Only int type allowed\n");
	if (n == 3)
		ft_putstr("Arguments error : Doublons not allowed\n");
	else
		ft_putstr("Error");
	exit(0);
}

void			doublon_verification(t_pm *s)
{
	int			i;
	int			j;

	i = 0;
	j = 0;
	while (i != s->alen)
	{
		j = 0;
		while (j + 1 != s->alen)
		{
			if (s->a[i] == s->a[i + j + 1])
				arg_error(3);
			j++;
		}
		i++;
	}
}

void			int_verification(char **argv, int argc)
{
	int			i;
	int			j;
	long int	l;
	long int	m;

	l = 2147483647;
	l = -2147483648;
	i = 1;
	while (argv[i])
	{
		j = -1;
		while (argv[i][++j])
			if (!ft_isdigit(argv[i][j]) && !(j == 0 && argv[i][0] == '-'))
				arg_error(1);
		if (ft_strlen(argv[i]) >= 10
		&& (ft_latoi(argv[i]) > l || ft_latoi(argv[i]) < m))
			arg_error(2);
		i++;
	}
}

int				main(int argc, char **argv)
{
	t_pm		*s;

	int_verification(argv, argc);
	init_s(&s, argc, argv);
	doublon_verification(s);
	ft_putinttab(s->a, argc - 1, "\n");
	run_checker(s);
	free(s->a);
	free(s->b);
	free(s);
	return (0);
}
