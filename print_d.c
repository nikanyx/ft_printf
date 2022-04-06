/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:33:34 by cmachado          #+#    #+#             */
/*   Updated: 2022/04/06 21:37:51 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_d(int n)
{
	size_t	len;
	char	*s;

	s = ft_itoa(n);
	len = ft_strlen(s);
	write(1, &*s, len);
	return (len);
}
