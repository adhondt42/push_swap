/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inttab_cmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 15:28:02 by adhondt           #+#    #+#             */
/*   Updated: 2018/05/30 16:27:26 by adhondt          ###   ########.fr       */
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
