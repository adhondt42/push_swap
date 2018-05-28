/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:25:06 by adhondt           #+#    #+#             */
/*   Updated: 2018/05/23 19:49:15 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

char	*ft_strchr(const char *s, int c)
{
	char	*cs;

	if (!s)
		return (NULL);
	cs = (char *)s;
	while (*cs != c && *cs)
		cs++;
	if (*cs == c)
		return (cs);
	return (NULL);
}
