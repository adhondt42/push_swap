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

char	*ft_strcat(char *dest, const char *src)
{
	int		i;
	char	*csrc;

	i = ft_strlen(dest);
	csrc = (char *)src;
	while (*csrc)
	{
		dest[i] = *csrc;
		i++;
		csrc++;
	}
	dest[i] = '\0';
	return (dest);
}
