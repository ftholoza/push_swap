/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_instr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:31:21 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/06 22:00:59 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_instr(int count_ra, int count_rb)
{
	while (count_ra > 0 && count_rb > 0)
	{
		ft_printf("rr\n");
		count_ra--;
		count_rb--;
	}
	while (count_ra > 0)
	{
		ft_printf("ra\n");
		count_ra--;
	}
	while (count_rb > 0)
	{
		ft_printf("rb\n");
		count_rb--;
	}
}
