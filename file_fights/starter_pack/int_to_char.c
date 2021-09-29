/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** int_to_char.c
*/

#include "../fight.h"

char *int_to_char(int nbr_base)
{
    int len = 1;
    for (int i = nbr_base; i != 0; len++, i = i / 10);
    char *str_res = malloc(sizeof(char) * len + 1);
    if (nbr_base == 0) str_res[len++ - 1] = '0';
    int i = 0;
    for (i = len - 2; nbr_base != 0; nbr_base = nbr_base / 10, i--) {
        str_res[i] = nbr_base % 10 + 48;
    }
    str_res[len - 1] = '\0';
    return (str_res);
}