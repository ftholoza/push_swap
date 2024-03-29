/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:33:41 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/06 18:22:40 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_Dlist li)
{
	t_stack	*temp;
	t_stack	*temp2;

	temp = li->end;
	temp2 = li->begin->next;
	li->end = li->begin;
	li->end->back = temp;
	li->end->next = NULL;
	li->end->back->next = li->end;
	li->begin = temp2;
	li->begin->back = NULL;
}
