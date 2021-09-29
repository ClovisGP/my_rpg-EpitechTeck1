/*
** EPITECH PROJECT, 2019
** starter_pack
** File description:
** my_putstr_array.c
*/

#include "../src/lemin.h"

void my_putstr_array(char **array)
{
    my_putstr(array[0]);
    for (int i = 1; array[i] != NULL; i++) {
        my_putchar('\n');
        my_putstr(array[i]);
    }
}