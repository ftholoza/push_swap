/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:38:42 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/06 18:25:10 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_Dlist	sort(t_Dlist lia, t_Dlist lib)
{
	int	val;

	val = less_moves(lia, lib);
	lib = push_b(val, lia, lib);
	return (lib);
}
