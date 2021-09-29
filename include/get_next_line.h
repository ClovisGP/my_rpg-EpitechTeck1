/*
** EPITECH PROJECT, 2019
** get_next_line.h
** File description:
** file.h for get_next_line
*/
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

#ifndef READ_SIZE
#define READ_SIZE (1)
#endif
struct sto {
    char *buffer;
    int ret;
    char *res;
};
typedef struct sto sto_t;
struct sto *get_next_line_bis(int fd, struct sto *st);
int check_end_line(char *str);
char *copy_in(char *src, char *dest);
char *get_next_line(int fd);
char *get_next_line(int fd);