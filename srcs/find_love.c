/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_love.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:28:14 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/08 11:30:58 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_close_big(int value, t_Dlist lib)
{
	t_stack		*temp;
	long int	temp2;
	int			res;

	temp = lib->begin;
	temp2 = LONG_MAX;
	while (temp != NULL)
	{
		if (((long)temp->value - value) > 0
			&& ((long)temp->value - value) < temp2)
		{
			temp2 = (long)temp->value - value;
			res = temp->value;
		}
		temp = temp->next;
	}
	return (res);
}

int	find_love(int value, t_Dlist lib)
{
	if (check_if_big(value, lib))
	{
		value = find_little(lib);
		return (value);
	}
	value = ft_close_big(value, lib);
	return (value);
}
