/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** creation_option.c
*/
#include "../include/proto.h"

void save_write_data_bis(source_t *dt, int file)
{
    write(file, "level ", 6);
    write(file, my_int_to_str(dt->pers->level), \
    my_strlen(my_int_to_str(dt->pers->level)));
    write(file, "\n", 1);
    write(file, "is_boss ", 8);
    write(file, my_int_to_str(dt->wrd->is_boss), 1);
    write(file, "\n", 1);
    write(file, "is_", 3);
    write(file, (dt->pers->is_man == 0) ? "man\n" : "wom\n", 4);
    write(file, "End\n", 4);
}

void save_write_data(source_t *dt, int file)
{
    write(file, "quest_rec ", 10);
    write(file, my_int_to_str(dt->wrd->quest_rec[0]), 1);
    write(file, " ", 1);
    write(file, my_int_to_str(dt->wrd->quest_rec[1]), 1);
    write(file, " ", 1);
    write(file, my_int_to_str(dt->wrd->quest_rec[2]), 1);
    write(file, "\n", 1);
    write(file, "inven ", 6);
    write(file, my_int_to_str(dt->wrd->inven[0]), 1);
    write(file, " ", 1);
    write(file, my_int_to_str(dt->wrd->inven[1]), 1);
    write(file, "\n", 1);
    write(file, "pv ", 3);
    write(file, my_int_to_str(dt->pers->pv), \
    my_strlen(my_int_to_str(dt->pers->pv)));
    write(file, "\n", 1);
    save_write_data_bis(dt, file);
}

int save_write(source_t *dt)
{
    int file = open("file_txt/save.txt", O_WRONLY | O_CREAT, 0777);

    dt->pers->pv = 10;
    if (file < 3) {
        write(2, "Error: the file save can't be openned\n", 35);
        dt->wrd->save->rect.left = 300;
        return (84);
    }
    write(file, "Save number 1\n", 14);
    save_write_data(dt, file);
    close(file);
    dt->wrd->save->rect.left = 0;
    return (0);
}