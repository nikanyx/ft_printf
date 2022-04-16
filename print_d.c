/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:33:34 by cmachado          #+#    #+#             */
/*   Updated: 2022/04/16 22:02:10 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	w_nbr(int n, int cnt)
{
	char	c;

	if (n == -2147483648)
	{
		write(1, "-2", 2);
		n = 147483648;
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n > 9)
	{
		cnt += w_nbr(n / 10, cnt);
		w_nbr(n % 10, cnt);
	}
	else
	{
		c = n + 48;
		write(1, &c, 1);
	}
	return (cnt);
}

int	print_d(int n)
{
	int	cnt;

	cnt = w_nbr(n, 1);
	if (n < 0)
	{
		cnt += 1;
		if (n == -2147483648)
			cnt += 1;
	}
	return (cnt);
}
