/*
** EPITECH PROJECT, 2022
** Antman
** File description:
** my_str
*/

#include "antman.h"

int my_strlen(char *str)
{
    int b = 0;

    for (; str[b]; b++);
    return b;
}

char *my_strcat(char *dest, char *src)
{
    int dest_len = my_strlen(dest);

    for (int i = 0; src[i]; i++)
        dest[dest_len + i] = src[i];
    return dest;
}
