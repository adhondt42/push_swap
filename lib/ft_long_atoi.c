/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_inttab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 13:06:08 by adhondt           #+#    #+#             */
/*   Updated: 2018/06/20 13:06:15 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

long	ft_long_atoi(const char *str)
{
	long i;
	long nb;
	long sign;

	nb = 0;
	sign = 0;
	i = 0;
	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v') ||
			(str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	sign = (str[i] == '-') ? 1 : 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && (str[i] >= 48) && (str[i] <= 57))
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	return (sign == 1) ? -nb : nb;
}
