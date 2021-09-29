/*
** EPITECH PROJECT, 2019
** starter_pack
** File description:
** copy a string into another
*/

#include "../fight.h"

char *my_strncpy(char *src, int start)
{
    int i = start;
    int u = 0;
    char *dest = malloc(sizeof(char) * my_strlen(src) + 1);

    while (src[i] != '\0') {
        dest[u] = src[i];
        i++;
        u++;
    }
    dest[u] = '\0';
    return (dest);
}