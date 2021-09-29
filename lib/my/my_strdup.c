/*
** EPITECH PROJECT, 2019
** Strud
** File description:
** task01
*/
int my_strlen(char const *str);
#include <stdlib.h>

char *my_strdup(char const *src)
{
    int i = 0;
    char *str;
    str = malloc(8 * my_strlen(src) + 1);
    if (!str) return "NULL";
    while (i < my_strlen(src)) {
        str[i] = src[i];
        i++;
    }
    str[i++] = '\0';
    return (str);
}
