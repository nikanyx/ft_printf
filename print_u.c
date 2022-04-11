/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:07:50 by cmachado          #+#    #+#             */
/*   Updated: 2022/04/11 20:57:24 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	w_nbr(int n, int cnt)
{
	char	c;

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

int	print_u(unsigned int n)
{
	int	cnt;

	cnt = w_nbr(n, 1);
	return (cnt);
}
