/*
** EPITECH PROJECT, 2022
** Antman
** File description:
** antman
*/

#ifndef GIANTMAN_H_
    #define GIANTMAN_H_

    #define CSIZE sizeof(char)

    #include <fcntl.h>
    #include <stdlib.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <unistd.h>

int my_pow(int nb, int pow);
int is_number(char c);
int my_nblen(int nb);
int my_strlen(char *str);
void my_putchar(char c);
void my_putstr(char *str);
int my_put_nbr(int nb);
char *my_strcat(char *dest, char *src);

char *my_open(char *path);
int ch_nblen(char *str);

char *int_tochar(char *str, int *off);
char my_getchr(char *str);
char *my_getstr(int nb);
char *get_content(char *path, int _fd, int len);

#endif /* !ANTMAN_H_ */
