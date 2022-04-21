/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:29:20 by cmachado          #+#    #+#             */
/*   Updated: 2022/04/21 21:49:22 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	w_nbr(unsigned long int n, int cnt)
{
	char	c;

	if (n >= 16)
	{
		cnt += w_nbr(n / 16, cnt);
		w_nbr(n % 16, cnt);
	}
	else
	{
		if (n > 9)
			c = n + 87;
		else
			c = n + 48;
		write(1, &c, 1);
	}
	return (cnt);
}

int	print_p(unsigned long int p)
{
	int	cnt;

	write(1, "0x", 2);
	cnt = w_nbr(p, 1) + 2;
	return (cnt);
}
