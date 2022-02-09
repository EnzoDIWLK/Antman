/*
** EPITECH PROJECT, 2022
** Antman
** File description:
** main
*/

#include <stdio.h>
#include <string.h>
#include "antman.h"

int check_intcomp(char *str)
{
    if (is_number(str[0]) == 1 &&
        is_number(str[1]) == 1 &&
        is_number(str[2]) == 1) {
        return 1;
        }
    return 0;
}

char *antman(char *content, char *compressed)
{
    int len = find_word(content);
    char **arr = str_to_array(content);

    change_same_word(arr);
    for (int i = 0; i != len; i++) {
        printf("%s", arr[i]);
    }
    return compressed;
}

int main(int ac, char **av)
{
    struct stat *st = malloc(sizeof(struct stat));
    char *content;
    char *compressed;

    if (ac == 1)
        return 84;
    stat(av[1], st);
    content = malloc(CSIZE * st->st_size);
    compressed = malloc(CSIZE * st->st_size);
    content = get_content(av[1], -1, st->st_size);
    content = antman(content, compressed);
    return 0;
}
