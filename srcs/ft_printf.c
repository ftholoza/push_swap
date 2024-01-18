/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:32:15 by ftholoza          #+#    #+#             */
/*   Updated: 2023/12/06 22:14:18 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdarg.h>
#include <unistd.h>

static int	ft_call_numberf(char c, va_list arg)
{
	size_t	count;
	int		temp;

	count = 0;
	if (c == 'd' || c == 'i')
	{
		temp = va_arg(arg, int);
		ft_putnbr(temp);
		count += ft_int_size_decimal(temp);
	}
	if (c == 'u')
	{
		temp = va_arg(arg, unsigned int);
		ft_putunsigned(temp);
		count += ft_int_u(temp);
	}
	return (count);
}

static int	ft_call_hexaf(char c, va_list arg)
{
	size_t	count;
	int		temp;

	count = 0;
	if (c == 'x')
	{
		temp = va_arg(arg, int);
		ft_puthexa_l2(temp);
		count += ft_int_size_hexa2(temp);
	}
	if (c == 'X')
	{
		temp = va_arg(arg, int);
		ft_puthexa_u(temp);
		count += ft_int_size_hexa2(temp);
	}
	return (count);
}

static int	ft_call_fonction(char c, va_list arg)
{
	size_t	count;

	count = 0;
	if (c == 's')
		count += ft_putstr(va_arg(arg, char *));
	if (c == 'c')
		count += ft_putchar(va_arg(arg, int));
	if (c == 'd' || c == 'i')
		count += ft_call_numberf(c, arg);
	if (c == 'u')
		count += ft_call_numberf(c, arg);
	if (c == 'x')
		count += ft_call_hexaf(c, arg);
	if (c == 'X')
		count += ft_call_hexaf(c, arg);
	if (c == 'p')
		count += ft_print_adress(va_arg(arg, long unsigned int));
	if (c == '%')
	{
		count += 1;
		ft_putchar('%');
	}
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list			arg;
	size_t			count;
	int				i;

	i = 0;
	count = 0;
	if (!str)
		return (-1);
	va_start (arg, str);
	while (str[i])
	{
		if (str[i] != '%')
		{
			ft_putchar(str[i]);
			count++;
		}
		else
		{
			i++;
			count += (ft_call_fonction(str[i], arg));
		}
		i++;
	}
	return (count);
}

/*int	main(void)
{
	ft_printf("%d",ft_printf(NULL));
}*/
