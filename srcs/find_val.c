/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_val.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:24:21 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/06 18:51:46 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_val(int val, t_Dlist li)
{
	int		i;
	t_stack	*temp;

	i = 0;
	temp = li->begin;
	while (temp != NULL)
	{
		if (temp->value == val)
			break ;
		temp = temp->next;
		i++;
	}
	return (i);
}
