/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 12:04:44 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/08 14:54:04 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "stdio.h"

t_Dlist	action_a(t_Dlist lia, t_Dlist lib, char *str)
{
	if (ft_strncmp(str, "pa\n", 3) == 0)
		lia = push(lib, lia);
	if (ft_strncmp(str, "sa\n", 3) == 0)
		swap(lia);
	if (ft_strncmp(str, "ra\n", 3) == 0)
		rotate(lia);
	if (ft_strncmp(str, "rra\n", 4) == 0)
		reverse_rotate(lia);
	if (ft_strncmp(str, "rr\n", 3) == 0)
	{
		rotate(lia);
		rotate(lib);
	}
	if (ft_strncmp(str, "rrr\n", 4) == 0)
	{
		reverse_rotate(lia);
		reverse_rotate(lib);
	}
	return (lia);
}

t_Dlist	action_b(t_Dlist lia, t_Dlist lib, char *str)
{
	if (ft_strncmp(str, "pb\n", 3) == 0)
		lib = push(lia, lib);
	if (ft_strncmp(str, "sb\n", 3) == 0)
		swap(lib);
	if (ft_strncmp(str, "rb\n", 3) == 0)
		rotate(lib);
	if (ft_strncmp(str, "rrb\n", 4) == 0)
		reverse_rotate(lib);
	return (lib);
}

void	check(t_Dlist lia)
{
	char	*str;
	t_Dlist	lib;

	lib = new_list();
	while (1)
	{
		str = get_next_line(0);
		if (str == NULL)
			break ;
		lia = action_a(lia, lib, str);
		lib = action_b(lia, lib, str);
	}
	if (!check_order(lia))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}
