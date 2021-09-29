/*
** EPITECH PROJECT, 2019
** my_strcat.c
** File description:
** concatening two str
*/
#include <stdlib.h>
int my_strlen(char const *str);

char *my_strcat(char *one, char *two)
{
    int size_one = my_strlen(one);
    int size_two = my_strlen(two);
    char *ret = malloc(sizeof(char) * (size_one + size_two + 1));
    int comp;
    int comp_se;

    for (comp = 0; one[comp] != '\0'; comp++)
        ret[comp] = one[comp];
    for (comp_se = 0; two[comp_se] != '\0'; comp_se++) {
        ret[comp] = two[comp_se];
        comp = comp + 1;
    }
    ret[comp] = '\0';
    return (ret);
}