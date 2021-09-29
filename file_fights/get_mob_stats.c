/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** get_mob_stats.c
*/

#include "fight.h"

char *add_end_char(char *str, char c)
{
    int len = 0;
    char *new;
    int i = 0;

    len = myy_strlen(str);
    new = malloc(sizeof(char) * (len + 2));
    for (i = 0; i < len; i++) new[i] = str[i];
    new[i] = c;
    new[i + 1] = '\0';
    return (new);
}

char *get_file(int fd)
{
    int rd = 0;
    int bk = 0;
    char *new = NULL;
    char buffer[1];

    while (1) {
        rd = read(fd, buffer, 1);
        buffer[rd] = '\0';
        if (rd <= 0) break;
        new = add_end_char(new, buffer[0]);
    }
    return (new);
}