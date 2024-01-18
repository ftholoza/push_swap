/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:34:23 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/06 18:21:55 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_Dlist li)
{
	t_stack	*temp;
	t_stack	*temp2;

	temp = li->begin;
	temp2 = li->end->back;
	li->begin = li->end;
	li->begin->next = temp;
	li->begin->back = NULL;
	li->begin->next->back = li->begin;
	li->end = temp2;
	li->end->next = NULL;
}
