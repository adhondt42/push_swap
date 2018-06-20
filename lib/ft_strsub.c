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

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*tronc;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if ((tronc = (char *)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	while (len--)
	{
		tronc[i] = s[start + i];
		i++;
	}
	tronc[i] = '\0';
	return (tronc);
}
