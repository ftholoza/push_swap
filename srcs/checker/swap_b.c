/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:32:14 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/08 13:16:43 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	swap(t_Dlist li)
{
	t_stack		*temp;
	t_stack		*temp2;

	if (li->lenght > 2)
	{
		temp = li->begin->next->next;
		temp2 = li->begin;
		li->begin = li->begin->next;
		li->begin->next = li->begin->back;
		li->begin->back = NULL;
		li->begin->next->next = temp;
		li->begin->next->back = li->begin;
		li->begin->next->next->back = li->begin->next;
	}
	else
	{
		li->begin = li->begin->next;
		li->begin->next = li->begin->back;
		li->begin->back = NULL;
		li->begin->next->back = li->begin;
		li->begin->next->next = NULL;
	}
}
