/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** take_dialogue.c
*/
#include "include/proto.h"

int my_leng_board(char **board)
{
    int comp;

    if (board == NULL) return (0);
    for (comp = 0; board[comp] != NULL; comp++);
    return (comp);
}

char **replacement_for_dial_bis(char **board, int line, int comp)
{
    if (board[line][comp] == '_')
        board[line][comp] = '\n';
    return (board);
}

char **replacement_for_dial(char **board)
{
    int line = 0;
    int comp = 0;

    for (; board[line] != NULL; line++) {
        for (comp = 0; board[line][comp] != '\0'; comp++)
            board = replacement_for_dial_bis(board, line, comp);
    }
    return (board);
}

int put_dialogue(source_t *dt, char *str)
{
    dt->wrd->dial->dial_text = my_splite('#', str);
    if (!dt->wrd->dial->dial_text) {
        write(2, "Error: dialogues can't be load\n", 31);
        return (84);
    }
    if (my_leng_board(dt->wrd->dial->dial_text) != 28) {
        write(2, "Error: dialogues are modified\n", 30);
        return (84);
    }
    dt->wrd->dial->dial_text = replacement_for_dial(dt->wrd->dial->dial_text);
    return (0);
}

int take_dialogue(source_t *dt)
{
    FILE *fd = fopen("file_txt/dialogue.txt", "r+");
    char *tmp = NULL;
    char *dialogue = NULL;
    int norme = 0;
    size_t size = 0;
    int ret_gl = 2;

    if (fd == NULL) {
        write(2, "Error: dialogue.txt can't be openned\n", 31);
        return (84);
    }
    ret_gl = getline(&dialogue, &size, fd);
    if (ret_gl <= 0) return (84);
    for (int comp = 0; ret_gl > 0; comp++) {
        if (comp != 0)
            dialogue = my_strcat(dialogue, tmp);
        ret_gl = getline(&tmp, &size, fd);
    }
    norme++;
    if (put_dialogue(dt, dialogue) == 84) return (84);
    fclose(fd);
}