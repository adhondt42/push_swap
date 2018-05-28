/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_initialization.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 18:57:03 by adhondt           #+#    #+#             */
/*   Updated: 2018/05/28 23:08:24 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

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

void	init_s(t_pm **s, int argc, char **argv)
{
	int	i;

	i = -1;
	if (!(*s = (t_pm *)malloc(sizeof(t_pm))))
		return ;
	(*s)->a = ft_intnew(argc - 1, 0);
	(*s)->b = ft_intnew(argc - 1, 0);
	(*s)->med = 0;
	(*s)->alen = argc -1;
	(*s)->blen = 0;
	while (++i < argc - 1)
		(*s)->a[i] = ft_atoi(argv[i + 1]);
}

void			arg_error(int n)
{
	if (n == 1)
		ft_putstr("Arguments error : Only digits\n");
	else if (n == 2)
		ft_putstr("Arguments error : Only int type allowed\n");
	else if (n == 3)
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

