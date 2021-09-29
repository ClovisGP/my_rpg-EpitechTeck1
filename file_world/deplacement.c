/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** deplacement.c
*/
#include "../include/proto.h"

void deplac_right(source_t *dt)
{
    dt->wrd->flag_save = 0;
    dt->pers->img->rect.top = 200;
    if (dt->wrd->dial->is_dia == 1) {
        sfClock_destroy(dt->wrd->dial->dial_clo);
        dt->wrd->dial->is_dia = 0;
    }
    if (dt->map[dt->pers->pos[1]][dt->pers->pos[0] + 1] == '0') {
        dt->pers->clo_depl = sfClock_create();
        dt->pers->end_depl = dt->pers->img->pos.x + 100;
        dt->pers->mouv = 1;
        dt->wrd->vi->po_view.x = 10;
        dt->wrd->vi->po_view.y = 0;
    }
}

void deplac_left(source_t *dt)
{
    dt->wrd->flag_save = 0;
    dt->pers->img->rect.top = 300;
    if (dt->wrd->dial->is_dia == 1) {
        sfClock_destroy(dt->wrd->dial->dial_clo);
        dt->wrd->dial->is_dia = 0;
    }
    if (dt->map[dt->pers->pos[1]][dt->pers->pos[0] - 1] == '0') {
        dt->pers->clo_depl = sfClock_create();
        dt->pers->end_depl = dt->pers->img->pos.x - 100;
        dt->pers->mouv = 2;
        dt->wrd->vi->po_view.x = -10;
        dt->wrd->vi->po_view.y = 0;
    }
}

void deplac_down(source_t *dt)
{
    dt->wrd->flag_save = 0;
    dt->pers->img->rect.top = 0;
    if (dt->wrd->dial->is_dia == 1) {
        sfClock_destroy(dt->wrd->dial->dial_clo);
        dt->wrd->dial->is_dia = 0;
    }
    if (dt->map[dt->pers->pos[1] + 1][dt->pers->pos[0]] == '0') {
        dt->pers->clo_depl = sfClock_create();
        dt->pers->end_depl = dt->pers->img->pos.y + 100;
        dt->pers->mouv = 3;
        dt->wrd->vi->po_view.x = 0;
        dt->wrd->vi->po_view.y = 10;
    }
}

void deplac_up(source_t *dt)
{
    dt->wrd->flag_save = 0;
    dt->pers->img->rect.top = 100;
    if (dt->wrd->dial->is_dia == 1) {
        sfClock_destroy(dt->wrd->dial->dial_clo);
        dt->wrd->dial->is_dia = 0;
    }
    if (dt->map[dt->pers->pos[1] - 1][dt->pers->pos[0]] == '0') {
        dt->pers->clo_depl = sfClock_create();
        dt->pers->end_depl = dt->pers->img->pos.y - 100;
        dt->pers->mouv = 4;
        dt->wrd->vi->po_view.x = 0;
        dt->wrd->vi->po_view.y = -10;
    }
}