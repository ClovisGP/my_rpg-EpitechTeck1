/*
** EPITECH PROJECT, 2019
** starter_pack
** File description:
** my_strlen.c
*/
#include "../fight.h"

int myy_strlen(char *str)
{
    int i = 0;

    if (str == NULL) return (0);
    while (str[i] != '\0') {
        i++;
    }
    return (i);
}