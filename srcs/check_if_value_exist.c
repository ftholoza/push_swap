/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_value_exist.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:25:07 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/07 17:06:46 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_if_value_exist(int value, t_Dlist lib)
{
	t_stack	*temp;

	temp = lib->begin;
	while (temp != NULL)
	{
		if (value == temp->value)
			return (1);
		temp = temp->next;
	}
	return (0);
}
