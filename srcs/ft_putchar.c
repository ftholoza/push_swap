/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 07:52:58 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/06 22:00:00 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"
#include "push_swap.h"

int	ft_putchar(int c)
{
	size_t	i;

	i = 1;
	write (1, &c, 1);
	return (i);
}
