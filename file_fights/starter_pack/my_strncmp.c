/*
** EPITECH PROJECT, 2019
** starter_pack
** File description:
** my_strncmp.c
*/

#include "../fight.h"

int my_strncomp(char *str1, char *str2, int stop)
{
    if (stop < 0) return (84);
    for (int i = 0; str1[i] != '\0'; i++) {
        if (i == stop) break;
        if (str1[i] != str2[i]) return (84);
    }
    return (0);
}