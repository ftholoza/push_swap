/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:55:29 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/08 15:33:29 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "checker.h"

int	ft_check_mon_boeuf(char *boeuf)
{
	int	i;

	i = 0;
	while (i < BUFFER_SIZE)
	{
		if (boeuf[i] == '\n')
			return (1);
		if (boeuf[i] == '\0')
			return (1);
		i++;
	}
	return (0);
}

char	*recup(char *boeuf)
{
	int		i;
	char	*res;

	i = 0;
	if (!boeuf)
		return (NULL);
	while (boeuf[i] != '\n' && boeuf[i])
		i++;
	if (boeuf[i] == '\n')
		i++;
	res = malloc(sizeof (char) * i + 1);
	if (!res)
		return (res);
	res[i] = '\0';
	ft_memcpy(res, boeuf, i);
	return (res);
}

static char	*ft_coupe(char *rest, char *res)
{
	int				i;
	int				j;
	char			*resf;

	j = 0;
	i = 0;
	if (!rest || !res)
		return (free(rest), NULL);
	while (rest[i] == res[i] && rest[i])
		i++;
	if (i == ft_strlen(rest))
		return (free(rest), NULL);
	while (rest[i])
	{
		i++;
		j++;
	}
	resf = malloc(sizeof (char) * j + 1);
	resf[j] = '\0';
	ft_memcpy(resf, (rest + (i - j)), j);
	free(rest);
	return (resf);
}

char	*get_next_line(int fd)
{
	static char		*rest;
	char			*boeuf;
	char			*res;
	char			*temp;

	boeuf = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!boeuf)
		return (boeuf);
	ft_memset(boeuf, 0, (BUFFER_SIZE + 1));
	while (read(fd, boeuf, BUFFER_SIZE) > 0)
	{
		temp = rest;
		rest = ft_strjoin(temp, boeuf);
		free(temp);
		if (ft_check_mon_boeuf(boeuf))
			break ;
		ft_memset(boeuf, 0, BUFFER_SIZE);
	}
	free(boeuf);
	res = recup(rest);
	rest = ft_coupe(rest, res);
	if (ft_strlen(rest) == 0)
		free(rest);
	return (res);
}
