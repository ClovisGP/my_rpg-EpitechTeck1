/*
** EPITECH PROJECT, 2019
** my_getnbr.c
** File description:
**  fonction for my_getnbr
*/
#include <stdlib.h>
int my_atoi(char *str);
int my_getnbr_2(char *str_nb, int comp);

int my_getnbr(char *str)
{
    char *str_nb;
    int comp;
    int first = 0;
    int last = 0;
    int neg = 0;
    int leng = 0;

    while ((str[first] < 48 || str[first] > 57) && str[first] != '\0')
        first = first + 1;
    neg = (str[first - 1] == '-') ? 1 : 0;
    last = first;
    while (str[last] >= 48 && str[last] <= 57)
        last = last + 1;
    leng = ((neg == 1) ? 1 : 0) + (last - first) + 1;
    str_nb = malloc(sizeof(char) * leng + 1);
    str_nb[0] = (neg == 1) ? '-' : ' ';
    for (comp = ((neg == 1) ? 1 : 0); first <= last; comp++) {
        str_nb[comp] = str[first];
        first = first + 1;
    }
    return (my_getnbr_2(str_nb, comp));
}

int my_getnbr_2(char *str_nb, int comp)
{
    str_nb[comp-1] = '\0';
    return (my_atoi(str_nb));
}