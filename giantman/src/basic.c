/*
** EPITECH PROJECT, 2022
** Antman
** File description:
** basic
*/

int my_pow(int nb, int pow)
{
    int res = 1;

    for (int i = 0; i != pow; i++)
        res *= nb;
    return res;
}

int is_number(char c)
{
    if (c > '9' || c < '0')
        return 0;
    return 1;
}

int ch_nblen(char *str)
{
    int i = 0;

    for (; str[i]; i++)
        if (str[i] > '9' || str[i] < '0')
            return i - 1;
    return i;
}

int my_nblen(int nb)
{
    int i = 0;

    for (; nb > 0; i++)
        nb /= 10;
    return i;
}
