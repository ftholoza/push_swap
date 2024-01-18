/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_adress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:21:06 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/06 21:46:38 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_print_adress(long long unsigned ptr)
{
	int	i;

	if (ptr == 0)
	{
		write (1, "(nil)", 5);
		return (5);
	}
	i = 2;
	write(1, "0x", 2);
	ft_puthexa_l(ptr);
	i += ft_int_size_hexa(ptr);
	return (i);
}
