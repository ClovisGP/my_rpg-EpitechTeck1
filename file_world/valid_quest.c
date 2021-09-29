/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** valid_quest.c
*/
#include "../include/proto.h"

void valid_quest_bis(source_t *dt)
{
    if (dt->wrd->quest_rec[0] == 2 || dt->wrd->quest_rec[0] == 3) {
        if (dt->wrd->quest_rec[1] == 2 || dt->wrd->quest_rec[1] == 3)
            dt->wrd->quest_rec[2] = 2;
    } else {
        sfClock_destroy(dt->wrd->dial->dial_clo);
        dt->wrd->dial->is_dia = 0;
    }
}

void valid_quest(source_t *dt, int choice)
{
    if (choice == 0) {
        if (dt->wrd->inven[1] == 1) {
            dt->wrd->quest_rec[0] = 2;
            dt->wrd->inven[1] = 0;
        } else {
            sfClock_destroy(dt->wrd->dial->dial_clo);
            dt->wrd->dial->is_dia = 0;
        }
    }else if (choice == 1) {
        if (dt->wrd->inven[0] == 1) {
            dt->wrd->quest_rec[1] = 2;
            dt->wrd->inven[0] = 0;
        } else {
            sfClock_destroy(dt->wrd->dial->dial_clo);
            dt->wrd->dial->is_dia = 0;
        }
    } else
        valid_quest_bis(dt);
}