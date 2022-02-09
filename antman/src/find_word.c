/*
** EPITECH PROJECT, 2022
** antman
** File description:
** find word
*/

#include <unistd.h>

//------------------------------------find word----------
int check_spechar(char const chara)
{
    char *str = "!#$%&()*+,-./:;<=>?@[]^_'{|}~* \n\b\t\v\f\r\0'\'";

    for (int i = 0; str[i] != '\0'; i += 1)
        if (str[i] == chara)
            return (1);
    return (0);
}

int check_ordinchar(char const chara)
{
    char *str =
        "0123456789azertyuiopqsdfghjklmwxcvbnAZERTYUIOPQSDFGHJKLMWXCVBN";

    for (int i = 0; str[i] != '\0'; i += 1)
        if (str[i] == chara)
            return (1);
    return (0);
}

int find_word(char const *str)
{
    int nbr_word = 0;
    int i = 0;

    for (; str[i] != '\0'; i += 1) {
        if (check_spechar(str[i]) == 1) {
            nbr_word += 1;
        }
        if (check_spechar(str[i]) == 1 && check_ordinchar(str[i - 1])) {
            nbr_word += 1;
        }
    }
    if (check_ordinchar(str[i - 1]) == 1)
        nbr_word += 1;
    return (nbr_word);
}

int is_alpha(char c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return 1;
    return 0;
}

//------------------------------------find nbr char---------------------
int find_nbrchar(char const *str)
{
    int i = 0;

    for (; !check_spechar(str[i]) && str[i] != NULL; i++);
    return i;
}
