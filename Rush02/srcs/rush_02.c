#include "rush02.h"

void    ft_file_to_tab(char *tab, char *filename)
{	int fd;
	char buffer;
    printf("%s\n", filename);
    int j = 0;
    fd = open(filename, O_RDONLY);
    if (fd >= 0)
    {
        while (read(fd, &buffer, 1) != 0)
        {
			tab[j++] = buffer;
        }
    }
    else
        ft_putstr("Error");
    close(fd);
}

void    ft_parse_dict(char *argv)
{
	int i;
    char filename[13] = "numbers.dict\0";
    char tab[20000];
    char tab2[100];
    int *tabInt;
    int k = 0;
    ft_file_to_tab(tab, filename);

    int indice;
    printf("%d\n", indice);
    tabInt = ft_split_int_tab(argv);
            if (indice ==  0 && ft_strcmp(argv, "0") != 0)
            {
                ft_putstr("Error");
                return ;
            }
    while (i < ft_len_int_from_char(argv))
    {
        indice = ft_strstr(tab, ((tabInt[i] * (ft_len_int_from_char(argv) - i)) + '0'));  

        while (tab[indice] != ':')
            indice++;
        indice++;

        while (tab[indice] != '\n')
        {
            tab2[k++] = tab[indice];
            indice++;
        }
        ft_putstr(tab2);
        i++;
        k = 0;
    }
}


int main(int argc, char **argv)
{
    if (argc != 2)
        ft_putstr("Error\n");
    else
    {
        ft_parse_dict(argv[1]);
        ft_putchar('\n');
    }
    return (0);
}
