/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 22:23:41 by adhondt           #+#    #+#             */
/*   Updated: 2018/05/30 16:15:45 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int		bigger_than_pivot(int *a, int alen, int ipivot)
{
	int	i;

	i = 0;
	while (a[i] <= a[ipivot] && i < alen && i < alen)
		i++;
	if (i == alen)
		return (-1);
	return (i);
}

int		smaller_than_pivot(int *a, int alen, int ipivot)
{
	int	i;

	i = alen - 1;
	while (a[i] >= a[ipivot] && i >= 0)
		i--;
	return (i);
}
void	sort(int *a, int alen, int ipivot)
{
	int	ileft;
	int	iright;

	ileft = bigger_than_pivot(a, alen, ipivot);
	iright = smaller_than_pivot(a, alen, ipivot);
	if (ileft < 0 || iright < 0)
		return ;
	if (ileft > iright)
	{
		swap_int(&a[ileft], &a[ipivot]);
		quick_sort(a, ileft);
		quick_sort(a + ileft, alen - ileft);
		return ;
	}
	else
		swap_int(&a[ileft], &a[iright]);
	sort(a, alen, ipivot);
}

void	quick_sort(int *a, int alen)
{
	int	middle;
	int	last;

	if (alen == 1)
		return ;
	else if (alen == 2)
	{
		if (a[0] > a[1])
			swap_int(&a[0], &a[1]);
		return ;
	}
	else
	{
		middle = (alen) / 2;
		last = alen -1;
		if (a[0] > a[middle])
			swap_int(&(a[0]), &(a[middle]));
		if (a[middle] > a[last])
			swap_int(&(a[last]), &(a[middle]));
		if (a[0] > a[middle])
			swap_int(& (a[0]), &(a[middle]));
		if (alen == 3)
			return ;
	}
	swap_int(&(a[middle]), &(a[last])); // take the pivot to last pos.
	sort(a, alen, last);
}
