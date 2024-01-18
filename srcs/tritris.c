/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tritris.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:34:30 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/06 22:15:41 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	norm3(t_Dlist lia, int *stock)
{
	if (stock[0] == 1 && stock[1] == 3 && stock[2] == 2)
	{
		reverse_rotate(lia);
		swap(lia);
		ft_printf("rra\nsa\n");
	}
	if (stock[0] == 2 && stock[1] == 1 && stock[2] == 3)
	{
		swap(lia);
		ft_printf("sa\n");
	}
	if (stock[0] == 3 && stock[1] == 1 && stock[2] == 2)
	{
		rotate(lia);
		ft_printf("ra\n");
	}
}

void	tritris(t_Dlist lia)
{
	int	*stock;

	stock = simplify(lia);
	if (stock[0] == 2 && stock[1] == 3 && stock[2] == 1)
	{
		reverse_rotate(lia);
		ft_printf("rra\n");
	}
	if (stock[0] == 1 && stock[1] == 2 && stock[2] == 3)
	{
		free(stock);
		return ;
	}
	if (stock[0] == 3 && stock[1] == 2 && stock[2] == 1)
	{
		swap(lia);
		reverse_rotate(lia);
		ft_printf("sa\nrra\n");
	}
	norm3(lia, stock);
	free(stock);
}
