/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_l.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:00:09 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/06 21:47:08 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_puthexa_l(long long unsigned int n)
{
	char	*base;

	base = "0123456789abcdef";
	if (n / 16)
		ft_puthexa_l(n / 16);
	write(1, &base[n % 16], 1);
}
