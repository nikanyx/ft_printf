/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:07:50 by cmachado          #+#    #+#             */
/*   Updated: 2022/04/16 22:04:00 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	w_nbr(unsigned int base, int upp, unsigned int n, int cnt)
{
	char	c;

	if (n > (base - 1))
	{
		cnt += w_nbr(base, upp, n / base, cnt);
		w_nbr(base, upp, n % base, cnt);
	}
	else
	{
		if (n > 9 && upp == 1)
			c = n + 55;
		else if (n > 9 && upp == 0)
			c = n + 87;
		else
			c = n + 48;
		write(1, &c, 1);
	}
	return (cnt);
}

int	print_u(unsigned int base, int upp, unsigned int n)
{
	int	cnt;

	cnt = w_nbr(base, upp, n, 1);
	return (cnt);
}
