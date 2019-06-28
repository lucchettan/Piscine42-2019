# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nlucchet <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/24 12:18:30 by nlucchet          #+#    #+#              #
#    Updated: 2019/06/26 10:05:57 by nlucchet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -c -Wall -Wextra -Werror -Iincludes
_SRCS = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
OBJS = $(_SRCS:.c=.o)
SRCS = $(patsubst %, srcs/%, $(_SRCS)) 

all: $(NAME)

$(NAME): $(CC) $(CFLAGS) $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	 rm -f $(OBJS)

fclean: clean
	 rm -f $(NAME)

re: fclean all
