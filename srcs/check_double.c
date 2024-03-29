/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_double.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 20:33:37 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/06 20:33:42 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_double(t_Dlist lia)
{
	t_stack			*temp;
	t_stack			*temp2;
	long long int	val;

	temp = lia->begin;
	while (temp != NULL)
	{
		val = temp->value;
		temp2 = temp;
		while (temp2 != NULL)
		{
			temp2 = temp2->next;
			if (temp2 != NULL)
				if (temp2->value == val)
					return (0);
		}
		temp = temp->next;
	}
	return (1);
}
