/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 11:53:57 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/08 14:39:19 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include "unistd.h"
# include "stdlib.h"
# include "limits.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

typedef struct t_stack
{
	int				value;
	struct t_stack	*back;
	struct t_stack	*next;
}	t_stack;

typedef struct t_Dlist
{
	int				lenght;
	struct t_stack	*begin;
	struct t_stack	*end;
}*t_Dlist;

char	*get_next_line(int fd);
int		ft_strlen(const char *str);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strjoin(char *rest, char *boeuf);
t_Dlist	new_list(void);
void	rotate(t_Dlist li);
void	reverse_rotate(t_Dlist li);
t_Dlist	push(t_Dlist lia, t_Dlist lib);
int		check_order(t_Dlist li);
void	swap(t_Dlist li);
int		ft_strncmp(char *s1, char *s2, size_t n);
void	check(t_Dlist lia);
void	free_dlist(t_Dlist li);
void	free_tab(char **tab);
char	**ft_split(char const *s, char c);
int		check_double(t_Dlist lia);
int		check_str(char *str);
int		is_num(char *str);
t_Dlist	push_back_dlist(t_Dlist li, int x);
int		ft_atoi(const char *nptr);
int		is_empty_list(t_Dlist li);
int		list_lenght(t_Dlist li);

#endif
