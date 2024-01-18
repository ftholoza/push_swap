/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   less_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:38:11 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/06 18:09:02 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	less_moves(t_Dlist lia, t_Dlist lib)
{
	t_stack		*temp;
	int			val;
	int			temp1;
	int			temp2;

	temp1 = -1;
	temp = lia->begin;
	while (temp != NULL)
	{
		temp2 = count_moves(temp->value, lia, lib);
		if (temp2 < temp1 || temp1 == -1)
		{
			temp1 = temp2;
			val = temp->value;
		}
		temp = temp->next;
	}
	return (val);
}
