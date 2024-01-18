/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:31:51 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/06 22:09:25 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	reverse_rotate_lib(t_Dlist lib)
{
	int	count_rrb;

	count_rrb = 1;
	reverse_rotate(lib);
	return (count_rrb);
}

static int	rotate_lia(int val, t_Dlist lia)
{
	int	count_ra;

	count_ra = 0;
	while (lia->begin->value != val)
	{
		rotate(lia);
		count_ra++;
	}
	return (count_ra);
}

static	int	reverse_rotate_lia(int val, t_Dlist lia)
{
	int	count_rra;

	count_rra = 0;
	while (lia->begin->value != val)
	{
		reverse_rotate(lia);
		count_rra++;
	}
	return (count_rra);
}

void	set_lia_lib(int val, t_Dlist lia, t_Dlist lib, int index_love)
{
	int	count_ra;
	int	count_rra;
	int	count_rb;
	int	count_rrb;

	count_ra = 0;
	count_rra = 0;
	count_rb = 0;
	count_rrb = 0;
	if (find_val(val, lia) < (lia->lenght - find_val(val, lia)))
		count_ra = rotate_lia(val, lia);
	else
		count_rra = reverse_rotate_lia(val, lia);
	while (!check_if_good(val, lib))
	{
		if ((lib->lenght - index_love -1) < index_love)
			count_rrb += reverse_rotate_lib(lib);
		else
		{
			rotate(lib);
			count_rb++;
		}
	}
	print_instr(count_ra, count_rb);
	print_reverse_instr(count_rra, count_rrb);
}

t_Dlist	push_b(int val, t_Dlist lia, t_Dlist lib)
{
	int	index_love;

	index_love = find_val(find_love(val, lib), lib);
	set_lia_lib(val, lia, lib, index_love);
	lib = push(lia, lib);
	ft_printf("pb\n");
	return (lib);
}
