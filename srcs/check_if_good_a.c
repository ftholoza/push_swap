/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_good_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:29:25 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/06 17:57:23 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_if_good_a(int value, t_Dlist lib)
{
	value = find_love(value, lib);
	if (lib->begin->value == value)
		return (1);
	return (0);
}
