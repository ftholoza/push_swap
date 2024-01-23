# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/03 15:44:24 by ftholoza          #+#    #+#              #
#    Updated: 2024/01/23 17:21:41 by ftholoza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS = -Wall -Wextra -Werror 
SRCS = $(addprefix srcs/, $(SRC))
SRCSB = $(addprefix srcs/checker/, $(SRCB))
HEADER = push_swap.h
HEADERB = checker.h
SRCB = check_double_b.c push_back_list_b.c ft_atoi_b.c is_empty_list_b.c list_lenght_b.c free_tab_b.c free_dlist_b.c ft_split_b.c check_order_b.c check_str_b.c check_b.c checker_b.c ft_strlen_b.c ft_strncmp_b.c get_next_line_utils_b.c get_next_line_b.c is_num_b.c new_list_b.c push_b.c reverse_rotate_b.c rotate_b.c swap_b.c
SRC = error.c main.c free_dlist.c ft_strlen.c ft_strjoin.c ft_split.c check_if_big.c check_if_good_a.c check_if_good.c check_if_value_exist.c count_moves.c find_big_adress.c find_big.c find_little.c find_little_adress.c find_love.c ft_puthexa_l2.c ft_int_size_hexa2.c ft_int_u.c ft_int_size_decimal.c ft_int_size_hexa.c ft_printf.c ft_print_adress.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_puthexa_l.c ft_puthexa_u.c ft_putunsigned.c find_val.c ft_atoi.c is_empty_list.c less_moves.c check_double.c check_order.c check_str.c free_tab.c is_num.c list_first.c list_last.c list_lenght.c new_list.c print_instr.c print_list.c push_a.c print_reverse_instr.c push_back_list.c push_b.c push.c push_front_list.c push_swap.c reverse_rotate.c rotate.c set_order_a.c simplify.c sort.c start_sort.c swap.c tritris.c
MAIN = srcs/main.c
OBJ = $(SRC:.c=.o)
OBJB = $(SRCB:.c=.o)
REALNAME = push_swap


all : $(REALNAME)
re : fclean all
$(REALNAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -I $(HEADER) -o $(REALNAME)
$(OBJ) : $(SRCS)
	$(CC) $(FLAGS) -c $(SRCS)
clean :
	rm -f $(OBJ)
fclean : clean
	rm -f $(REALNAME)
