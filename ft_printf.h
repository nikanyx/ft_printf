/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:23:43 by cmachado          #+#    #+#             */
/*   Updated: 2022/04/21 21:57:15 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);

int		print_pct(void);

int		print_c(int c);

int		print_s(char *s);

int		print_d(int n);

int		print_u(unsigned int base, int upp, unsigned int n);

int		print_p(unsigned long int n);

#endif