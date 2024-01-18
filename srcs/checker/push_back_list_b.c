/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:18:25 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/08 13:17:10 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_Dlist	push_back_dlist(t_Dlist li, int x)
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
			return (li);
		li->lenght = 0;
		li->begin = element;
		li->end = element;
	}
	else
	{
		li->end->next = element;
		element->back = li->end;
		li->end = element;
	}
	li->lenght++;
	return (li);
}
