/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_front_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:23:54 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/06 18:18:40 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_Dlist	push_front_list(t_Dlist li, int x)
{
	t_stack	*element;

	element = malloc(sizeof(*element));
	if (!element)
		return (NULL);
	element->value = x;
	element->next = NULL;
	element->back = NULL;
	if (is_empty_list(li))
	{
		li = malloc(sizeof(*li));
		if (!li)
			return (NULL);
		li->lenght = 0;
		li->begin = element;
		li->end = element;
	}
	else
	{
		li->begin->back = element;
		element->next = li->begin;
		li->begin = element;
	}
	li->lenght++;
	return (li);
}
