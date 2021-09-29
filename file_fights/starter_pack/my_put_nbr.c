/*
** EPITECH PROJECT, 2019
** starter_pack
** File description:
** my_put_nbr.c
*/

#include "../src/lemin.h"

void my_put_nbr(int nbr_base)
{
    int nbr_res;

    if (nbr_base < 0) {
        my_putchar('-');
        nbr_base = nbr_base * (-1);
    }
    if (nbr_base >= 0) {
        if (nbr_base >= 10) {
            nbr_res = (nbr_base % 10);
            nbr_base = (nbr_base - nbr_res) / 10;
            my_put_nbr(nbr_base);
            my_putchar(48 + nbr_res);
        } else {
            my_putchar(48 + nbr_base % 10);
        }
    }
}