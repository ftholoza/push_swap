/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:31:01 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/06 21:48:01 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

void	ft_puthexa_u(int nb)
{
	char				*base;
	long unsigned int	n;

	n = (unsigned int) nb;
	base = "0123456789ABCDEF";
	if (n / 16)
		ft_puthexa_u(n / 16);
	write(1, &base[n % 16], 1);
}
