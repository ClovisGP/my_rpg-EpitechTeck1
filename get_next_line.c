/*
** EPITECH PROJECT, 2019
** get_next_line.c
** File description:
** fonction which print line
*/
#include "include/get_next_line.h"

int check_end(char *str, int choice)
{
    int comp = 0;

    if (choice == 1) {
        if (str == NULL)
            return (-1);
        for (comp = 0; str[comp] != '\0'; comp++);
        return (comp);
    }
    while (str[comp] != '\n') {
        if (str[comp] == '\0')
            return (-1);
        comp = comp + 1;
    }
    return (comp);
}

char *recup_after(char *str)
{
    char *result = malloc(sizeof(char) * READ_SIZE);
    int comp = 0;
    int comp_se = 0;
    int marq = 1;

    while (str[comp] != '\n') {
        if (str[comp] == '\0')
            return (NULL);
        comp = comp + 1;
    }
    comp = comp + 1;
    while (str[comp] && str[comp] != '\0') {
        result[comp_se] = str[comp];
        comp = comp + 1;
        comp_se = comp_se + 1;
    }
    return (result);
}

char *copy_in(char *src, char *dest)
{
    int comp = 0;
    int comp_se = 0;
    int leng_src = (src != NULL) ? check_end(src, 1) : 0;
    int leng_dest = (dest != NULL) ? check_end(dest, 1) : 0;
    char *result = malloc(sizeof(char) * (leng_src + leng_dest + 2));

    if (dest != NULL) {
        for (comp = 0; dest[comp] != '\0'; comp++)
            result[comp] = dest[comp];
        result[comp] = '\0';
    }
    if (src != NULL) {
        while (comp_se < READ_SIZE && src[comp_se] != '\n') {
            result[comp] = src[comp_se];
            comp = comp + 1;
            comp_se = comp_se + 1;
        }
        result[comp] = '\0';
    }
    return (result);
}

struct sto *get_next_line_bis(int fd, struct sto *st)
{
    while (check_end(st->buffer, 0) == -1 && st->ret >= READ_SIZE) {
        st->res = copy_in(st->buffer, st->res);
        st->ret = read(fd, st->buffer, READ_SIZE);
        st->buffer[READ_SIZE] = '\0';
    }
    st->res = copy_in(st->buffer, st->res);
    return (st);
}

char *get_next_line(int fd)
{
    struct sto *st = malloc(sizeof(sto_t));
    static int nb = 0;
    static char *sto;

    if (((fd <= -1 || READ_SIZE > 57) || !st) || ((fd <= -1 || \
    READ_SIZE > 57) && !st))
        return (NULL);
    st->buffer = malloc(sizeof(char) * (READ_SIZE + 1));
    st->res = NULL;
    if (nb > 0)
        st->res = copy_in(sto, NULL);
    st->ret = read(fd, st->buffer, READ_SIZE);
    if (st->ret <= 0)
        return (NULL);
    st->buffer[READ_SIZE] = '\0';
    st = get_next_line_bis(fd, st);
    sto = recup_after(st->buffer);
    if (st->ret < READ_SIZE)
        st->res[check_end(st->res, 1) - (READ_SIZE - st->ret)] = '\0';
    nb = nb + 1;
    return (st->res);
}