/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 20:35:42 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/08 13:50:27 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "stdio.h"

int	check_int(char *str)
{
	char	*intmax;
	int		i;
	int		j;

	i = 0;
	j = 1;
	intmax = "2147483647";
	if (str[i] == '-')
	{
		i++;
		while (str[j])
			j++;
		if (j < 11)
			return (1);
		intmax = "-2147483648";
	}
	while (intmax[i])
	{
		if (str[i] > intmax[i])
			return (0);
		if (str[i] < intmax[i])
			return (1);
		i++;
	}
	return (1);
}

int	check_number(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-')
		i++;
	if (str[i] >= '0' && str[i] <= '9')
	{
		while (str[i] >= '0' && str[i] <= '9')
			i++;
		if (str[i])
			return (0);
	}
	else
		return (0);
	return (1);
}

int	check_str(char *str)
{
	char	**tab;
	int		i;

	i = 0;
	if (!str[i])
		return (error(), 2);
	tab = ft_split(str, ' ');
	while (tab[i] != NULL)
	{
		if (!check_number(tab[i]))
			return (free_tab(tab), 0);
		if (ft_strlen(tab[i]) >= 10)
		{
			if (!check_int(tab[i]))
				return (free_tab(tab), 0);
		}
		i++;
	}
	if (i == 1)
		return (free_tab(tab), 2);
	free_tab(tab);
	return (1);
}
