/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:27:40 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/06 22:03:21 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_big(t_Dlist lib)
{
	t_stack		*temp;
	long int	temp1;

	temp = lib->begin;
	temp1 = LONG_MIN;
	while (temp != NULL)
	{
		if (temp1 < temp->value)
			temp1 = temp->value;
		temp = temp->next;
	}
	return (temp1);
}
