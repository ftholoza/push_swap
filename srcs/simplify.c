/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simplify.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:33:45 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/06 18:24:40 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*simplify(t_Dlist lia)
{
	int	*stock;

	stock = malloc(sizeof(int) * 3);
	stock[0] = 2;
	stock[1] = 2;
	stock[2] = 2;
	stock[find_val(find_little(lia), lia)] = 1;
	stock[find_val(find_big(lia), lia)] = 3;
	return (stock);
}
