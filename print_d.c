/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:33:34 by cmachado          #+#    #+#             */
/*   Updated: 2022/04/11 20:57:29 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	w_chr(int upp, int n)
{
	char	c;

	if (n > 9 && upp == 1)
		c = n + 55;
	else if (n > 9 && upp == 0)
		c = n + 87;
	else
		c = n + 48;
	write(1, &c, 1);
}

static int	w_nbr(int base, int upp, int n, int cnt)
{
	if (n == -2147483648)
	{
		write(1, "-2", 2);
		n = 147483648;
		cnt = 2;
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
		cnt = 1;
	}
	if (n > base)
	{
		cnt += w_nbr(base, upp, n / base, cnt);
		w_nbr(base, upp, n % base, cnt);
	}
	else
		w_chr(upp, n);
	return (cnt);
}

int	print_d(int base, int upp, int n)
{
	int	cnt;

	cnt = w_nbr(base, upp, n, 1);
	return (cnt);
}
