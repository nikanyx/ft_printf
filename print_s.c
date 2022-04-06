/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:36:16 by cmachado          #+#    #+#             */
/*   Updated: 2022/04/06 21:37:04 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_s(char *s)
{
	size_t	len;

	len = ft_strlen(s);
	write(1, &*s, len);
	return (len);
}
