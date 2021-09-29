/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** mouvement.c
*/
#include "../include/proto.h"

void mouv_hud_right(source_t *dt)
{
    dt->pers->img->rect.left = dt->pers->img->rect.left + 100;
    if (dt->pers->img->rect.left > 350)
        dt->pers->img->rect.left = 0;
    dt->pers->img->pos.x = dt->pers->img->pos.x + 10;
    dt->wrd->hud_dial->pos.x = dt->wrd->hud_dial->pos.x + 10;
    dt->wrd->dialog->pos.x = dt->wrd->dialog->pos.x + 10;
    dt->wrd->hud_quest->pos.x = dt->wrd->hud_quest->pos.x + 10;
    dt->wrd->hud_inv->pos.x = dt->wrd->hud_inv->pos.x + 10;
    dt->wrd->pv->pos.x = dt->wrd->pv->pos.x + 10;
    dt->wrd->level->pos.x = dt->wrd->level->pos.x + 10;
    sfView_move(dt->wrd->vi->view, dt->wrd->vi->po_view);
    sfClock_restart(dt->pers->clo_depl);
}

void mouv_hud_left(source_t *dt)
{
    dt->pers->img->rect.left = dt->pers->img->rect.left + 100;
    if (dt->pers->img->rect.left > 350)
        dt->pers->img->rect.left = 0;
    dt->pers->img->pos.x = dt->pers->img->pos.x - 10;
    dt->wrd->hud_dial->pos.x = dt->wrd->hud_dial->pos.x - 10;
    dt->wrd->dialog->pos.x = dt->wrd->dialog->pos.x - 10;
    dt->wrd->hud_quest->pos.x = dt->wrd->hud_quest->pos.x - 10;
    dt->wrd->hud_inv->pos.x = dt->wrd->hud_inv->pos.x - 10;
    dt->wrd->pv->pos.x = dt->wrd->pv->pos.x - 10;
    dt->wrd->level->pos.x = dt->wrd->level->pos.x - 10;
    sfView_move(dt->wrd->vi->view, dt->wrd->vi->po_view);
    sfClock_restart(dt->pers->clo_depl);
}

void mouv_hud_down(source_t *dt)
{
    dt->pers->img->rect.left = dt->pers->img->rect.left + 100;
    if (dt->pers->img->rect.left > 350)
        dt->pers->img->rect.left = 0;
    dt->pers->img->pos.y = dt->pers->img->pos.y + 10;
    dt->wrd->hud_dial->pos.y = dt->wrd->hud_dial->pos.y + 10;
    dt->wrd->dialog->pos.y = dt->wrd->dialog->pos.y + 10;
    dt->wrd->hud_quest->pos.y = dt->wrd->hud_quest->pos.y + 10;
    dt->wrd->hud_inv->pos.y = dt->wrd->hud_inv->pos.y + 10;
    dt->wrd->pv->pos.y = dt->wrd->pv->pos.y + 10;
    dt->wrd->level->pos.y = dt->wrd->level->pos.y + 10;
    sfView_move(dt->wrd->vi->view, dt->wrd->vi->po_view);
    sfClock_restart(dt->pers->clo_depl);
}

void mouv_hud_up(source_t *dt)
{
    dt->pers->img->rect.left = dt->pers->img->rect.left + 100;
    if (dt->pers->img->rect.left > 350)
        dt->pers->img->rect.left = 0;
    dt->pers->img->pos.y = dt->pers->img->pos.y - 10;
    dt->wrd->hud_dial->pos.y = dt->wrd->hud_dial->pos.y - 10;
    dt->wrd->dialog->pos.y = dt->wrd->dialog->pos.y - 10;
    dt->wrd->hud_quest->pos.y = dt->wrd->hud_quest->pos.y - 10;
    dt->wrd->hud_inv->pos.y = dt->wrd->hud_inv->pos.y - 10;
    dt->wrd->pv->pos.y = dt->wrd->pv->pos.y - 10;
    dt->wrd->level->pos.y = dt->wrd->level->pos.y - 10;
    sfView_move(dt->wrd->vi->view, dt->wrd->vi->po_view);
    sfClock_restart(dt->pers->clo_depl);
}