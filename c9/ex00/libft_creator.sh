# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nlucchet <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/24 12:03:09 by nlucchet          #+#    #+#              #
#    Updated: 2019/06/26 09:59:53 by nlucchet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -Wall -Werror -Wextra -c ft_putchar.c ft_putstr.c ft_swap.c ft_strlen.c
ft_strcmp.c ar rc libft.c ft_putchar.o ft_putstr.o ft_swap.o ft_strlen.o
ft_strcmp.o rm *.o
