/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** stock.c
*/
#include "include/proto.h"

int my_boardlen(char **board)
{
    int size = 0;

    while (board[size] != NULL)
        size = size + 1;
    return (size);
}

char **my_boardcpy(char **board)
{
    char **ret = NULL;
    int size = my_boardlen(board);
    int comp = 0;

    ret = malloc(sizeof(char *) * (size + 1));
    if (!ret) return (NULL);

    for (; board[comp] != NULL; comp++)
        ret[comp] = board[comp];
    ret[comp] = NULL;
    return (ret);
}

int display_help(void)
{
    int fd = open("file_txt/file_help.txt", O_RDONLY);
    char *line = NULL;

    if (fd < 3) {
        write(2, "Error: file_help.txt don't opened\n", 34);
        return (84);
    }
    line = get_next_line(fd);
    while (line != NULL) {
        my_printf("%s\n", line);
        line = get_next_line(fd);
    }
    return (0);
}