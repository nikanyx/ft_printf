# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmachado <cmachado@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/04 19:30:43 by cmachado          #+#    #+#              #
#    Updated: 2022/04/06 21:40:24 by cmachado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c print_c.c print_s.c print_pct.c print_d.c \
	ft_strlen.c ft_itoa.c

CFLAGS = -Wall -Werror -Wextra

all: $(NAME) clean

object:
	gcc -c $(CFLAGS) $(SRC)

$(NAME): object
	ar -crs $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all