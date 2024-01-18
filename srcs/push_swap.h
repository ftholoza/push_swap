/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:33:56 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/08 13:48:00 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "unistd.h"
# include "stdlib.h"
# include "limits.h"

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

int		check_if_big(int value, t_Dlist lib);
int		check_if_good_a(int value, t_Dlist lib);
int		check_if_good(int value, t_Dlist lib);
int		check_if_value_exist(int value, t_Dlist lib);
int		count_moves(int val, t_Dlist lia, t_Dlist lib);
int		find_big_adress(t_Dlist lib);
int		find_big(t_Dlist lib);
int		find_little_adress(t_Dlist lib);
int		find_little(t_Dlist lib);
int		find_love(int value, t_Dlist lib);
int		find_val(int val, t_Dlist li);
int		ft_atoi(const char *nptr);
int		is_empty_list(t_Dlist li);
int		less_moves(t_Dlist lia, t_Dlist lib);
int		list_first(t_Dlist li);
int		list_last(t_Dlist li);
int		list_lenght(t_Dlist li);
t_Dlist	new_list(void);
void	print_instr(int count_ra, int count_rb);
void	print_dlist(t_Dlist li);
t_Dlist	push_a(t_Dlist lia, t_Dlist lib);
t_Dlist	push_back_dlist(t_Dlist li, int x);
t_Dlist	push_b(int val, t_Dlist lia, t_Dlist lib);
t_Dlist	push(t_Dlist lia, t_Dlist lib);
t_Dlist	push_front_list(t_Dlist li, int x);
void	push_swap(t_Dlist lia);
void	reverse_rotate(t_Dlist li);
void	rotate(t_Dlist li);
void	set_order_a(t_Dlist lib);
void	set_order_b(t_Dlist lib);
int		*simplify(t_Dlist lia);
t_Dlist	sort(t_Dlist lia, t_Dlist lib);
t_Dlist	start_sort(t_Dlist lia, t_Dlist lib);
void	swap(t_Dlist li);
void	tritris(t_Dlist lia);
int		ft_int_size_decimal(int nb);
char	**ft_split(char *str, char sep);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(const char *str);
void	free_dlist(t_Dlist li);
int		is_num(char *str);
int		check_double(t_Dlist li);
int		check_str(char *str);
void	free_tab(char **str);
int		check_order(t_Dlist lia);
void	print_reverse_instr(int a, int b);
int		ft_printf(const char *str, ...);
size_t	ft_strlen(const char *str);
int		ft_putchar(int c);
int		ft_putstr(char *s);
char	*ft_itoa(int n);
void	ft_putnbr(int n);
void	ft_puthexa_l(long long unsigned int nb);
void	ft_puthexa_u(int nb);
void	ft_putunsigned(unsigned int nb);
int		ft_print_adress(long long unsigned int ptr);
int		ft_int_size_decimal(int nb);
int		ft_int_size_hexa(long long unsigned nb);
int		ft_int_size_hexa2(unsigned int nb);
int		ft_int_u(unsigned int nb);
void	ft_puthexa_l2(int nb);
void	error(void);

#endif
