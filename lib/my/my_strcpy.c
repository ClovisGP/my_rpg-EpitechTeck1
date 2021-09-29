/*
** EPITECH PROJECT, 2019
** my_strcpy.c
** File description:
** copy one str in another
*/
#include <stdlib.h>
int my_strlen(char const *str);

char *my_strcpy(char *src)
{
    int comp = 0;
    char *ret = malloc(sizeof(char) * my_strlen(src) + 1);

    for (comp = 0; src[comp] != '\0'; comp++)
        ret[comp] = src[comp];
    ret[comp] = '\0';
    return (ret);
}