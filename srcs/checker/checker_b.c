/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 11:53:07 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/08 15:33:23 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static int	check_error(t_Dlist lia)
{
	if (!check_order(lia))
	{
		free_dlist(lia);
		write(2, "Error\n", 6);
		return (0);
	}
	if (!check_double(lia))
	{
		write(2, "Error\n", 6);
		free_dlist(lia);
		return (0);
	}
	return (1);
}

static t_Dlist	format(char *str, t_Dlist lia)
{
	int		i;
	char	**str1;

	i = 0;
	if (check_str(str) == 2)
		return (NULL);
	if (!is_num(str) || (!check_str(str)))
	{
		write(2, "Error\n", 6);
		return (NULL);
	}
	str1 = ft_split(str, ' ');
	while (str1[i] != NULL)
	{
		lia = push_back_dlist(lia, ft_atoi(str1[i]));
		i++;
	}
	if (!check_error(lia))
		lia = NULL;
	free_tab(str1);
	return (lia);
}

void	norm7(char *str1, t_Dlist lia)
{
	lia = format(str1, lia);
	if (lia == NULL)
		return ;
	check(lia);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*str1;
	t_Dlist	lia;

	lia = new_list();
	str1 = NULL;
	i = 1;
	if (argc < 2)
		return (0);
	if (argc > 2)
	{
		while (i < argc)
		{
			str1 = ft_strjoin(str1, argv[i]);
			str1 = ft_strjoin(str1, " ");
			i++;
		}
	}
	if (argc == 2)
		str1 = argv[1];
	norm7(str1, lia);
	if (i > 1)
		free(str1);
	return (0);
}
