/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_little.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:26:40 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/06 18:04:45 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "limits.h"

int	find_little(t_Dlist lib)
{
	t_stack			*temp;
	long long int	temp1;

	temp = lib->begin;
	temp1 = INT_MAX;
	while (temp != NULL)
	{
		if (temp1 > temp->value)
			temp1 = temp->value;
		temp = temp->next;
	}
	return (temp1);
}
