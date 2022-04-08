/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:23:43 by cmachado          #+#    #+#             */
/*   Updated: 2022/04/08 21:59:25 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdio.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);

int		print_pct(void);

int		print_c(int c);

int		print_s(char *s);

int		print_d(int base, int upp, int n);

size_t	ft_strlen(const char *str);

char	*ft_itoa(int n);

#endif