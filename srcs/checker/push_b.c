/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:32:55 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/08 13:17:02 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static t_Dlist	norm(t_Dlist lia, t_Dlist lib)
{
	t_stack	*temp;

	temp = lib->begin;
	lib->begin = lia->begin;
	lia->begin = lia->begin->next;
	lia->begin->back = NULL;
	lib->begin->next = temp;
	lib->begin->next->back = lib->begin;
	lib->begin->back = NULL;
	return (lib);
}

static t_Dlist	norm2(t_Dlist lia, t_Dlist lib)
{
	t_stack	*temp;

	temp = lib->begin;
	lib->begin = lia->begin;
	lib->begin->next = temp;
	lia->begin = NULL;
	lib->begin->back = NULL;
	lib->begin->next->back = lib->begin;
	return (lib);
}

t_Dlist	push(t_Dlist lia, t_Dlist lib)
{
	if (is_empty_list(lib))
	{
		lib = malloc(sizeof(*lib));
		if (!lib)
			return (lib);
		lib->lenght = 0;
		lib->begin = lia->begin;
		lib->end = lia->begin;
		lia->begin = lia->begin->next;
		lib->begin->next = NULL;
	}
	else if (list_lenght(lia) == 1)
		lib = norm2(lia, lib);
	else
		lib = norm(lia, lib);
	lib->lenght++;
	lia->lenght--;
	return (lib);
}
