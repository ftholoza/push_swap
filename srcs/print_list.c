/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:29:27 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/06 22:01:05 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_dlist(t_Dlist li)
{
	t_stack	*temp;

	if (!li)
		return ;
	temp = li->begin;
	while (temp != NULL)
	{
		ft_printf("[%d]", temp->value);
		temp = temp->next;
	}
}
