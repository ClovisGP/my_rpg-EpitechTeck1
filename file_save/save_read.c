/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** save_read.c
*/
#include "../include/proto.h"
int save_read_encore(source_t *dt, FILE *file, char **tmp_bis);

int save_read_bis_bis_bis_bis(source_t *dt, FILE *file, char **tmp_bis)
{
    if (my_strcmpn(tmp_bis[0], "is_man", 6) == 0) {
        if (my_leng_board(tmp_bis) == 1)
            dt->pers->is_man = 0;
    } else if (my_strcmpn(tmp_bis[0], "is_wom", 6) == 0) {
        if (my_leng_board(tmp_bis) == 1)
            dt->pers->is_man = 1;
    } else
        save_read_encore(dt, file, tmp_bis);
    return (0);
}

int save_read_bis_bis_bis(source_t *dt, FILE *file, char **tmp_bis)
{
    if (my_strcmpn(tmp_bis[0], "level", 5) == 0) {
        if (my_leng_board(tmp_bis) == 2)
            dt->pers->level = my_getnbr(tmp_bis[1]);
    } else if (my_strcmpn(tmp_bis[0], "pv", 2) == 0) {
        if (my_leng_board(tmp_bis) == 2)
            dt->pers->pv = my_getnbr(tmp_bis[1]);
    } else
        save_read_bis_bis_bis_bis(dt, file, tmp_bis);
    return (0);
}

int save_read_bis_bis(source_t *dt, FILE *file, char **tmp_bis)
{
    if (my_strcmpn(tmp_bis[0], "quest_rec", 9) == 0) {
        if (my_leng_board(tmp_bis) == 4) {
            dt->wrd->quest_rec[0] = my_getnbr(tmp_bis[1]);
            dt->wrd->quest_rec[1] = my_getnbr(tmp_bis[2]);
            dt->wrd->quest_rec[2] = my_getnbr(tmp_bis[3]);
        }
    } else if (my_strcmpn(tmp_bis[0], "inven", 5) == 0) {
        if (my_leng_board(tmp_bis) == 3) {
            dt->wrd->inven[0] = my_getnbr(tmp_bis[1]);
            dt->wrd->inven[1] = my_getnbr(tmp_bis[2]);
        }
    } else
        save_read_bis_bis_bis(dt, file, tmp_bis);
    return (0);
}

int save_read_bis(source_t *dt, FILE *file)
{
    size_t size = 0;
    int loop = 0;
    char *tmp = NULL;
    char **tmp_bis = NULL;

    while (loop <= 6) {
        if (getline(&tmp, &size, file) == -1) return (84);
        tmp_bis = my_splite(' ', tmp);
        if (!tmp_bis) return (84);
        save_read_bis_bis(dt, file, tmp_bis);
        loop++;
    }
    return (0);
}

int save_read(source_t *dt)
{
    FILE *file = fopen("file_txt/save.txt", "r+");
    size_t size = 0;
    char *str = NULL;

    if (file == NULL) {
        write(2, "Error: the file save can't be load\n", 35);
        return (84);
    }
    if (getline(&str, &size, file) == -1) {
        write(2, "Error: the file save is empty\n", 30);
        return (84);
    } else if (save_read_bis(dt, file) == 84) {
        write(2, "Error: the file save containt an error\n", 39);
        return (84);
    }
    return (0);
}