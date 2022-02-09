/*
** EPITECH PROJECT, 2022
** Antman
** File description:
** int_tochar
*/

#include "antman.h"

char *int_tochar(char *str, int *off)
{
    int len = ch_nblen(str);
    char *res = malloc(CSIZE * len + 1);
    char temp = 0;
    int space = 0;
    int i = 1;

    *off = len;
    for (; str[0] <= '9' && str[0] >= '0'; i++) {
        temp = my_getchr(str);
        space = my_nblen(temp);
        res[i] = temp;
        str += space;
    }
    res[0] = -(i - 1);
    return res;
}
