/*
** EPITECH PROJECT, 2019
** starter_pack
** File description:
** my_strcat.c
*/

#include "../fight.h"

char *myy_strcat(char *str1, char *str2)
{
    int full_len = myy_strlen(str1) + myy_strlen(str2);
    char *n = malloc(sizeof(char) * full_len + 1);
    int y = 0;

    for (int i = 0; str1[i] != '\0'; i++, y++) n[y] = str1[i];
    for (int v = 0; v != 50; v++);
    for (int i = 0; str2[i] != '\0'; i++, y++) n[y] = str2[i];
    n[y + 1] = '\0';
    return (n);
}