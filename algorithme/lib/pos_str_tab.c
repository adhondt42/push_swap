/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 22:40:59 by adhondt           #+#    #+#             */
/*   Updated: 2018/05/24 10:50:45 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int		pos_str_tab(char *haystack, char **needle)
{
	int	i;

	i = 0;
	while (ft_strcmp(haystack, needle[i]) != 0)
		i++;
	if (ft_strcmp(haystack, needle[i]) == 0)
		return (i);
	return (-1);
}
