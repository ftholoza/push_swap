/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_size_hexa2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:28:41 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/06 21:45:49 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_int_size_hexa2(unsigned int n)
{
	int	size;

	size = 0;
	if (n >= 0 && n <= 9)
		return (1);
	while (n > 0)
	{
		n /= 16;
		size++;
	}
	return (size);
}
