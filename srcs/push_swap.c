/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:40:39 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/06 21:08:59 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_Dlist lia)
{
	t_Dlist	lib;

	lib = new_list();
	lib = start_sort(lia, lib);
	while (lia->lenght > 3)
		lib = sort(lia, lib);
	if (lia->lenght == 3)
		tritris (lia);
	while (lib->lenght > 0)
		lia = push_a(lia, lib);
	set_order_a(lia);
	free_dlist(lib);
	free_dlist(lia);
}
