/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** stockage.c
*/
#include "../include/proto.h"

void choice_dialogue_bis_bis_bis(source_t *dt, int pnj_x, int pnj_y)
{
    if (pnj_x == 37 && pnj_y == 1) {
        dt->wrd->dial->line = 25;
        dt->wrd->dial->is_dia = 1;
        dt->wrd->dial->name = my_strcpy("Sanic");
    }
}

void choice_dialogue_bis_bis(source_t *dt, int pnj_x, int pnj_y)
{
    if (pnj_x == 10 && pnj_y == 7) {
        dt->wrd->dial->line = 15;
        dt->wrd->dial->is_dia = 1;
        dt->wrd->dial->name = my_strcpy("Faustine");
    } else if (pnj_x == 7 && pnj_y == 14) {
        dt->wrd->dial->line = 17;
        dt->wrd->dial->is_dia = 1;
        dt->wrd->dial->name = my_strcpy("Aurore");
    } else {
        if (pnj_x == 15 && pnj_y == 18) {
            dt->wrd->dial->line = 20;
            dt->wrd->dial->is_dia = 1;
            dt->wrd->dial->name = my_strcpy("Leila");
        } else if (pnj_x == 1 && pnj_y == 13) {
            dt->wrd->dial->line = 23;
            dt->wrd->dial->is_dia = 1;
            dt->wrd->dial->name = my_strcpy("Cassandre");
        } else
            choice_dialogue_bis_bis_bis(dt, pnj_x, pnj_y);
    }
}

void choice_dialogue_bis(source_t *dt, int pnj_x, int pnj_y)
{
    if (pnj_x == 12 && pnj_y == 16) {
        dt->wrd->dial->line = 9;
        dt->wrd->dial->is_dia = 1;
        dt->wrd->dial->name = my_strcpy("Amynee");
    } else if (pnj_x == 10 && pnj_y == 15) {
        dt->wrd->dial->line = 11;
        dt->wrd->dial->is_dia = 1;
        dt->wrd->dial->name = my_strcpy("Inconnue");
    } else {
        if (pnj_x == 1 && pnj_y == 8) {
            dt->wrd->dial->line = 13;
            dt->wrd->dial->is_dia = 1;
            dt->wrd->dial->name = my_strcpy("Louise");
        } else
            choice_dialogue_bis_bis(dt, pnj_x, pnj_y);
    }
    if (dt->wrd->dial->is_dia == 1) {
        dt->wrd->dial->dial_clo = sfClock_create();
        sfText_setString(dt->wrd->dialog->text, \
        dt->wrd->dial->dial_text[dt->wrd->dial->line]);
    }
}