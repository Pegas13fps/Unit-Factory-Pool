# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: btymoshc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/07 12:13:17 by btymoshc          #+#    #+#              #
#    Updated: 2017/08/07 12:39:36 by btymoshc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = srcs/ft_putchar.c srcs/ft_putstr.c/srcs/ft_strcmp.c/srcs/ft_strlen.c srcs/ft_swap.c

H = H_F = $(wildcard includes/*.h)

all: libft.a

liba:
    gcc -Wall -Wextra -Werror $(H) -c $(FILES)
    ar rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

clean:
    /bin/rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

fclean: clean
    /bin/rm -f libft.a

re: fclean all
