/*
** EPITECH PROJECT, 2019
** starter_pack
** File description:
** my_getnbr.c
*/

#include "../fight.h"

int my_getnbr(char *nbr)
{
    int i = 0;
    int res = 0;

    while (nbr[i] != '\0') {
        res = res + nbr[i] - 48;
        res = res * 10;
        i++;
    }
    res = res / 10;
    return (res);
}