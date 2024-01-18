/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_order.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 20:34:04 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/08 13:06:33 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	check_order(t_Dlist li)
{
	t_stack			*temp;
	long int		temp1;

	temp = li->begin;
	temp1 = LONG_MIN;
	while (temp != NULL)
	{
		if (temp->value > temp1)
		{
			temp1 = temp->value;
			temp = temp->next;
		}
		else
			return (1);
	}
	return (0);
}
