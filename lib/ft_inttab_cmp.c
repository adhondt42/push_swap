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

int		ft_inttab_cmp(int *a, int alen, int *b, int blen)
{
	int	i;

	i = 0;
	while (i < alen && i < blen)
	{
		if (a[i] - b[i] != 0)
			return (i);
		else
			i++;
	}
	if (i < alen || i < blen)
		return (i);
	return (-1);
}
