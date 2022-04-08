/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 19:29:03 by cmachado          #+#    #+#             */
/*   Updated: 2022/04/08 21:59:29 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	check_var(const char c, va_list args)
{
	int	cnt;

	cnt = 0;
	if (c == 'c')
		cnt = print_c(va_arg(args, int));
	else if (c == 's')
		cnt = print_s(va_arg(args, char *));
	else if (c == '%')
		cnt = print_pct();
	else if (c == 'd' || c == 'i')
		cnt = print_d(10, 0, va_arg(args, int));
	else if (c == 'X')
		cnt = print_d(16, 1, va_arg(args, int));
	else if (c == 'x')
		cnt = print_d(16, 0, va_arg(args, int));
	//else ???
	return (cnt);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		ind;
	int		cnt;

	ind = 0;
	cnt = 0;
	va_start(args, str);
	while (str[ind])
	{
		if (str[ind] != '%')
		{
			write(1, &str[ind++], 1);
			cnt++;
		}
		else
		{
			cnt += check_var(str[++ind], args);
			ind++;
		}
	}
	va_end(args);
	return (cnt);
}
