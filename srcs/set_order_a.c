/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_order_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:33:11 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/06 22:02:01 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_order_a(t_Dlist lib)
{
	int	index_little;

	index_little = find_val(find_little(lib), lib);
	if (lib->lenght - index_little > index_little)
	{
		while (lib->begin->value != find_little(lib))
		{
			rotate(lib);
			ft_printf("ra\n");
		}
	}
	else
	{
		while (lib->begin->value != find_little(lib))
		{
			reverse_rotate(lib);
			ft_printf("rra\n");
		}
	}
}
