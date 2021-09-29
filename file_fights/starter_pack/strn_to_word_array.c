/*
** EPITECH PROJECT, 2019
** CPE_lemin_2019
** File description:
** strn_to_word_array.c
*/

#include "../fight.h"

int check_limiter(char c, char limiter)
{
    if (c != limiter) return (1);
    return (0);
}

int get_word_nnbr(char *str, char limiter)
{
    int cmp = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (check_limiter(str[i], limiter) == 1 && \
        check_limiter(str[i + 1], limiter) != 1) cmp++;
    }
    return (cmp);
}

int word_lenn(char *str, int i, char limiter)
{
    for (int v = 0; v != 40; v++);
    for (; str[i] != '\0'; i++) {
        if (check_limiter(str[i], limiter) != 1)
            return (i);
    }
    return (i);
}

char **strn_to_word_array(char *str, char limiter)
{
    int wd_nbr = get_word_nnbr(str, limiter) + 1;
    char **output = malloc(sizeof(char *) * wd_nbr + 1);
    int a = 0;
    int c = 0;
    int i = 0;

    for (; i < wd_nbr; i++, a++) {
        c = 0;
        output[i] = malloc(sizeof(char) * word_lenn(str, a, limiter));
        for (int v = 0; v != 50; v++);
        for (; str[a] != '\0' && check_limiter(str[a], limiter) != 0; c++, a++)
            output[i][c] = str[a];
        output[i][c] = '\0';
    }
    output[i + 1] = NULL;
    return (output);
}