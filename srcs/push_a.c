/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:35:06 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/07 17:04:10 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "stdio.h"

t_Dlist	push_a(t_Dlist lia, t_Dlist lib)
{
	int	index_love;

	index_love = find_val(find_love(lib->begin->value, lia), lia);
	if (lia->lenght - index_love > index_love)
	{
		while (!check_if_good_a(lib->begin->value, lia))
		{
			rotate(lia);
			ft_printf("ra\n");
		}
	}
	else
	{
		while (!check_if_good_a(lib->begin->value, lia))
		{
			reverse_rotate(lia);
			ft_printf("rra\n");
		}
	}
	lia = push(lib, lia);
	ft_printf("pa\n");
	return (lia);
}
