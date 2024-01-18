/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_big.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:26:05 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/06 17:56:50 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_if_big(int value, t_Dlist lib)
{
	t_stack	*temp;

	temp = lib->begin;
	while (temp != NULL)
	{
		if (value < temp->value)
			return (0);
		temp = temp->next;
	}
	return (1);
}
