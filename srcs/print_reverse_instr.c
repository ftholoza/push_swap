/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_reverse_instr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:59:56 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/06 22:01:18 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_reverse_instr(int count_rra, int count_rrb)
{
	while (count_rra > 0 && count_rrb > 0)
	{
		ft_printf("rrr\n");
		count_rra--;
		count_rrb--;
	}
	while (count_rra > 0)
	{
		ft_printf("rra\n");
		count_rra--;
	}
	while (count_rrb > 0)
	{
		ft_printf("rrb\n");
		count_rrb--;
	}
}
