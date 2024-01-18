/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_l2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:42:29 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/06 21:47:48 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

void	ft_puthexa_l2(int nb)
{
	char			*base;
	unsigned int	n;

	n = (unsigned int) nb;
	base = "0123456789abcdef";
	if (n / 16)
		ft_puthexa_l2(n / 16);
	write(1, &base[n % 16], 1);
}
