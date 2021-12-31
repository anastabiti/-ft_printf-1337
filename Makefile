# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/24 09:26:24 by atabiti           #+#    #+#              #
#    Updated: 2021/12/07 09:25:26 by atabiti          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = f1.c ft_putchar_fd.c ft_putnbr_fd.c ft_strlen.c hexadecimal.c manynbr.c type.c ft_putnbr2.c ft_putstr_fd.c ft_printf.c hexconverter.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $@ $^

clean :
	rm -f *.o

fclean : clean
	rm -rf $(NAME)
 
re : fclean all
