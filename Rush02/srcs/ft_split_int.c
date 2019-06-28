#include <stdio.h>
#include <stdlib.h>

int ft_len_int_from_char(char *nbr)
{
    int count = 0;
    if (nbr[0] == '\0')
        return 0;
    else
    {
        while (nbr[count] != '\0')
            count++;
    }
    return (count);
}

int ft_len_int(int *nbr)
{
    int count = 0;
    while (nbr[count])
            count++;
    return (count);
}

int    *ft_split_int_tab(char *nbr)
{
    int *tab;
    int i = 0;
    if (!(tab = malloc(sizeof(int) * (ft_len_int_from_char(nbr) + 1))))
        return NULL;
    else
    {
        while (i < ft_len_int_from_char(nbr))
        {
            tab[i] = nbr[i] - 48;
            i++;
        }
    }
    tab[i] = 0;
    return (tab);
}

char **ft_split_int_to_char_10(int *tab)
{
    char **result;
    int i = 0;
    int j = 0;


    if (!(result = malloc(sizeof(char **) * (ft_len_int(tab) + 1))))
        return NULL;
    while (tab[i])
    {
        j = 0;
        if (!(result[i] = malloc(sizeof(char *) * (ft_len_int(tab) - i))))
            return NULL;
        while (j < ft_len_int(tab) - i)
        {
            if (j == 0)
                result[i][j] = (char)tab[i] + '0';
            else
                result[i][j] = '0';
            j++;
        }
        i++;
    }
}