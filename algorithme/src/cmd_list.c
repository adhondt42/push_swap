/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 13:40:06 by adhondt           #+#    #+#             */
/*   Updated: 2018/05/29 18:22:29 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void		cmd_rr(t_pm *s, int i)
{
	int		tmp;
	int		j;

	j = (i == 8) ? s->alen : s->blen;
	if (i == 10)
	{
		cmd_rr(s, i - 1);
		cmd_rr(s, i - 2);
		s->cmd_nbr--;
		return ;
	}
	tmp = (i == 8) ? (s->a[s->alen - 1]) : (s->b[s->blen - 1]);
	while (--j > 0)
		(i == 8) ? s->a[j] = (s->a[j - 1]) : (s->b[j] = s->b[j- 1]);
	i == 8 ? (s->a[j] = tmp) : (s->b[j] = tmp);
	s->cmd_nbr++;
}

void		cmd_r(t_pm *s, int i)
{
	int		tmp;
	int		j;

	j = - 1;
	if (i == 7)
	{
		cmd_r(s, i - 1);
		cmd_r(s, i - 2);
		s->cmd_nbr--;
		return ;
	}
	tmp = (i == 5) ? (s->a[0]) : (s->b[0]);
	while (++j < (((i == 5) ? (s->alen - 1) : (s->blen - 1))))
		(i == 5) ? s->a[j] = (s->a[j + 1]) : (s->b[j] = s->b[j + 1]);
	i == 5 ? (s->a[j] = tmp) : (s->b[j] = tmp);
	s->cmd_nbr++;
}

void		cmd_s(t_pm *s, int i)
{
	int		tmp;

	if (i == 2)
	{
		cmd_s(s, i - 1);
		cmd_s(s, i - 2);
		s->cmd_nbr--;
		return ;
	}
	if (((i == 0) ? s->alen : s->blen) <= 2)
	{
		s->cmd_nbr++;
		return ;
	}
	tmp = (i == 0) ? s->a[0] : s->b[0];
	(i == 0) ? (s->a[0] = s->a[1]) :
		(s->b[0] = s->b[1]);
	(i == 0) ? (s->a[1] = tmp) : (s->b[1] = tmp);
	s->cmd_nbr++;
}

void		cmd_p(t_pm *s, int i)
{
	if (((i == 3) ? s->blen : s->alen) < 1)
	{
		s->cmd_nbr++;
		return ;
	}
	if (i == 3)
	{
		s->alen += 1;
		cmd_rr(s, 8);
		s->a[0] = s->b[0];
		cmd_r(s, 6);
		s->blen -= 1;
	}
	else
	{
		s->blen += 1;
		cmd_rr(s, 9);
		s->b[0] = s->a[0];
		cmd_r(s, 5);
		s->alen -= 1;
	}
	s->cmd_nbr--;
}


void		ft_error(void)
{
	ft_putstr("error");
	exit(0);

}
