/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** interaction.c
*/
#include "../include/proto.h"

void choice_dialogue(source_t *dt, int pnj_x, int pnj_y)
{
    if (pnj_x == 5 && pnj_y == 1) {
        dt->wrd->dial->line = 0;
        dt->wrd->dial->is_dia = 1;
        dt->wrd->dial->name = my_strcpy("Germain");
    } else if (pnj_x == 10 && pnj_y == 1) {
        dt->wrd->dial->line = 3;
        dt->wrd->dial->is_dia = 1;
        dt->wrd->dial->name = my_strcpy("Altair");
    }
    if (pnj_x == 33 && pnj_y == 8) {
        dt->wrd->dial->line = 5;
        dt->wrd->dial->is_dia = 1;
        dt->wrd->dial->name = my_strcpy("Ricardo");
    } else if (pnj_x == 26 && pnj_y == 3) {
        dt->wrd->dial->line = 7;
        dt->wrd->dial->is_dia = 1;
        dt->wrd->dial->name = my_strcpy("Fossoyeur");
    }
    choice_dialogue_bis(dt, pnj_x, pnj_y);
}

void next_discution(source_t *dt)
{
    int limit = who_speak(dt->wrd->dial->name);

    dt->wrd->dial->dial_tim = sfClock_getElapsedTime\
    (dt->wrd->dial->dial_clo);
    dt->wrd->dial->dial_unit = sfTime_asMilliseconds\
    (dt->wrd->dial->dial_tim);
    if (dt->wrd->dial->dial_unit > 250) {
        sfClock_restart(dt->wrd->dial->dial_clo);
        if (dt->wrd->dial->dial_text[dt->wrd->dial->line] != NULL && \
        dt->wrd->dial->line < limit) {
            dt->wrd->dial->line++;
            sfText_setString(dt->wrd->dialog->text, \
            dt->wrd->dial->dial_text[dt->wrd->dial->line]);
        } else
            what_quest(dt);
    }
}

void discution(source_t *dt)
{
    int norme = 0;
    int p_x = dt->pers->pos[0];
    int p_y = dt->pers->pos[1];

    if (dt->map[p_y][p_x - 1] == 'p')
        choice_dialogue(dt, p_x - 1, p_y);
    if (dt->map[p_y][p_x + 1] == 'p')
        choice_dialogue(dt, p_x + 1, p_y);
    norme++;
    if (dt->map[p_y - 1][p_x] == 'p')
        choice_dialogue(dt, p_x, p_y - 1);
    if (dt->map[p_y + 1][p_x] == 'p')
        choice_dialogue(dt, p_x, p_y + 1);
}

void what_interac(source_t *dt)
{
    find_item(dt);
    if (dt->wrd->dial->is_dia == 1)
        next_discution(dt);
    else if (dt->wrd->dial->is_dia == 0)
        discution(dt);
}