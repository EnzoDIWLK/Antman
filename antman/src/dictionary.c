/*
** EPITECH PROJECT, 2022
** Antman
** File description:
** second alghorythme dictionnary
*/

#include "antman.h"

int check_specchar(char const chara)
{
    char *str = "!#$%&()*+,-./:;<=>?@[]^_'{|}~a* \n\b\t\v\f\r'\'";

    for (int i = 0;str[i] != '\0'; i += 1)
        if (str[i] == chara)
            return (1);
    return (0);
}

char **str_to_array(char const *str)
{
    int y = 0;
    int nbr_word = find_word(str);
    char **array = malloc(sizeof(char *) * (nbr_word + 1));

    for (int i = 0; i < nbr_word; i += 1) {
        array[i] = malloc(sizeof(char) * (find_nbrchar(str + i) + 2));
        y = 0;
        do {
            array[i][y] = str[y];
            y++;
        } while (is_alpha(str[y]) && is_alpha(str[y - 1]));
        array[i][y + 1] = '\0';
        str += y == 0 ? 1 : y;
    }
    return (array);
}

char **change_word(char **array, int i, int y)
{
    if (i >= 127)
        return (array);
    if (array[i] == array[y]) {
        array[y][0] = -i;
        array[y][1] = -1;
    }
    return (array);
}

void change_same_word(char **array)
{
    for (int i = 0; array[i] != find_nbrchar(array[i]); i += 1) {
        for (int y = i + 1; array[y] != find_nbrchar(array[y]); y += 1)
            change_word(array, i, y);
    }
}
