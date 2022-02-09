/*
** EPITECH PROJECT, 2022
** antman
** File description:
** my_get
*/

#include <stdlib.h>
#include <stdio.h>
#include "giantman.h"

char my_getchr(char *str)
{
    int nb = 0;
    int tmp = 0;

    for (int i = 0; (str[i] >= '0' && str[i] <= '9') && i != 3; i++) {
        tmp = (10 * nb) + (str[i] - '0');
        if (tmp > 127)
            return nb;
        nb = tmp;
    }
    return ((char) nb);
}

char *my_getstr(int nb)
{
    int size = my_nblen(nb);
    char *result = NULL;
    int dizaine = 1;

    result = malloc(sizeof(char) * size);
    for (int i = 0; i < size - 1; i++)
        dizaine *= 10;
    for (int i = 0; i < size; i++) {
        result[i] = (nb / dizaine) + '0';
        nb = nb - ((nb / dizaine) * dizaine);
        dizaine /= 10;
    }
    return result;
}

char *get_content(char *path, int _fd, int len)
{
    int fd = _fd > 0 ? _fd : open(path, O_RDONLY);
    char *content = malloc(CSIZE * len);

    if (fd < 0) {
        write(1, "Get_content: error loading '", 29);
        write(1, path, my_strlen(path));
        write(1, "'.\nExiting 84.\n", 16);
        return "84";
    }
    read(fd, content, len);
    close (fd);
    return content;
}

char *my_open(char *path)
{
    struct stat *st = malloc(sizeof(struct stat));

    stat(path, st);
    return (get_content(path, -1, st->st_size));
}
