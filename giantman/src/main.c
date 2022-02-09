/*
** EPITECH PROJECT, 2022
** giantman
** File description:
** decompresse the file
*/

#include <stdio.h>
#include "giantman.h"

int is_alpha(char c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return 1;
    return 0;
}

void uncomp_dict(char *str, int bal)
{
    for (; !is_alpha(str[bal]); bal++)
        write(1, str[bal], 1);
}

void giantman(char *str, int type)
{
    if (type == 0)
        return;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 0) {
            uncomp_dict(str, -str[i]);
            i += 2;
        }
        my_putchar(str[i]);
    }
    my_putchar("\n");
}

int main(int ac, char **av)
{
    char *open = my_open(av[1]);

    if (ac != 3 || my_strlen(av[2]) > 1 || av[2][0] < '0' || av[2][0] > '3')
        return 84;
    if (open[0] < 0)
        return 84;
    printf("%s\n\t\t\t==\n\n", open);
    giantman(open, (int) (av[2][0] - '0'));
    return 0;
}
