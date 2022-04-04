/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 19:29:03 by cmachado          #+#    #+#             */
/*   Updated: 2022/04/04 22:21:17 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

int	print_c(int c)
{
	write(1, &c, 1);
	return (1);
}

int	check_var(const char c, va_list args)
{
	int	cnt;

	cnt = 0;
	if (c == 'c')
	{
		cnt = print_c(va_arg(args, int));
	}
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

