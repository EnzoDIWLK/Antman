/*
** EPITECH PROJECT, 2022
** Antman
** File description:
** my_put
*/

#include <unistd.h>
#include "giantman.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    write(1, str, my_strlen(str));
}

int my_put_nbr(int nb)
{
    int cmpt = 0;
    int ten = 1;

    for (; ten * 10 <= nb; ten = ten * 10, cmpt++);
    for (int i = 0; i < cmpt + 1; i++) {
        my_putchar(nb / ten + '0');
        nb = nb - ((nb / ten) * ten);
        ten = ten / 10;
    }
    return 0;
}
