/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_lenght.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:13:19 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/08 13:37:10 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	list_lenght(t_Dlist li)
{
	if (is_empty_list(li))
		return (0);
	return (li->lenght);
}
