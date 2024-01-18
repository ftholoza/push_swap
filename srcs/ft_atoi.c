/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:16:49 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/06 22:03:33 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "limits.h"

static int	ft_isnum(unsigned char c)
{
	int	i;

	i = 0;
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

static int	ft_is_white(char c)
{
	if (c >= '\t' && c <= '\r')
		return (1);
	else if (c == 32)
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *nptr)
{
	long long int	nb;
	int				i;
	int				sign;

	i = 0;
	nb = 0;
	sign = 1;
	while (ft_is_white((char)nptr[i]))
		i++;
	while ((char)nptr[i] == '-' || (char)nptr[i] == '+')
	{
		if ((char)nptr[i] == '-')
			sign *= -1;
		i++;
		nb++;
	}
	if (nb > 1)
		return (0);
	nb = 0;
	while (ft_isnum((char) nptr[i]))
	{
		nb = ((nb * 10) + ((char) nptr[i]) - 48);
		i++;
	}
	return (nb * sign);
}
/*#include <stdio.h>

int	main(int argc, char **argv)
{
	const char	*test = argv[1];
	printf("%d\n", ft_atoi(test));
	printf("%d\n", atoi(test));
}*/
