# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbergkul <tbergkul@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/22 11:04:41 by tbergkul          #+#    #+#              #
#    Updated: 2019/07/22 18:16:43 by tbergkul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_swap.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c

INCLUDES = ./includes/

NAME = libft.a

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c -I $(INCLUDES) $(SRC)
	ar rc $(NAME) ft_putchar.o ft_putstr.o ft_swap.o ft_strlen.o ft_strcmp.o

clean:
	/bin/rm -f ft_putchar.o ft_putstr.o ft_swap.o ft_strlen.o ft_strcmp.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
