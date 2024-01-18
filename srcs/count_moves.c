/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:37:45 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/06 22:13:43 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	big(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

static int	count_mid(t_Dlist li)
{
	int	mid;

	mid = (li->lenght / 2);
	if ((li->lenght % 2) != 0)
		mid++;
	return (mid);
}

int	count_moves(int val, t_Dlist lia, t_Dlist lib)
{
	int	count;
	int	index;
	int	mid;
	int	index_love;

	count = 0;
	mid = count_mid(lia);
	index = find_val(val, lia);
	if (index > mid)
	{
		index = mid - (index - mid);
		count += 1;
	}
	index_love = find_val(find_love(val, lib), lib);
	mid = count_mid(lib);
	if (index_love > mid)
	{
		index_love = mid - (index_love - mid);
		count += 1;
	}
	if (count == 1)
		return (index + index_love);
	else
		return (big(index, index_love));
}
