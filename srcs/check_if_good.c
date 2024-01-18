/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_good.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:28:49 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/06 17:57:46 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_if_good(int value, t_Dlist lib)
{
	value = find_love(value, lib);
	if (lib->end->value == value)
		return (1);
	return (0);
}
