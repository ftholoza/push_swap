/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_big_adress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:30:05 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/06 18:01:10 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_big_adress(t_Dlist lib)
{
	t_stack		*temp;
	int			i;
	int			temp1;
	int			x;

	temp = lib->begin;
	i = 0;
	temp1 = 0;
	while (temp != NULL)
	{
		if (temp1 < temp->value)
		{
			temp1 = temp->value;
			x = i;
		}
		temp = temp->next;
		i++;
	}
	return (x);
}
