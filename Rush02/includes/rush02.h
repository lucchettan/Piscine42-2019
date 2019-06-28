#ifndef RUSH02_H
# define RUSH02_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

int     ft_len_int_from_char(char *nbr);
int     *ft_split_int_tab(char *nbr);

void	ft_putchar(char c);
void	ft_putstr(char *str);
void    ft_putnbr(int nb);

int     ft_strstr(char *str, char *to_find);
int		ft_strcmp(char *s1, char *s2);



#endif