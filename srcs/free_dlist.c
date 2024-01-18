/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_dlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:23:53 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/06 18:06:25 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_dlist(t_Dlist li)
{
	t_stack	*temp;

	temp = li->begin;
	while (temp != NULL)
	{
		li->begin = li->begin->next;
		free(temp);
		temp = li->begin;
	}
	free(li);
}
