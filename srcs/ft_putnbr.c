/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 08:11:07 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/06 21:48:11 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <unistd.h>
#include "push_swap.h"

void	ft_putnbr(int n)
{
	long int	nb;

	nb = (long int) n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb / 10)
		ft_putnbr((nb / 10));
	ft_putchar(((nb % 10) + 48));
}
