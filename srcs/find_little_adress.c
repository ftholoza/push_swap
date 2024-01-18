/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_little_adress.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:30:44 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/06 18:03:37 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_little_adress(t_Dlist lib)
{
	t_stack	*temp;
	int		i;
	int		temp1;
	int		x;

	temp = lib->begin;
	i = 0;
	temp1 = INT_MAX;
	while (temp != NULL)
	{
		if (temp1 > temp->value)
		{
			temp1 = temp->value;
			x = i;
		}
		temp = temp->next;
		i++;
	}
	return (x);
}
