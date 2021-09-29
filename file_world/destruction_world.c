/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** destruction_world.c
*/
#include "../include/proto.h"

void reset_view_x(source_t *dt, sfVector2f pos_actual, sfVector2f pos_reset)
{
    sfVector2f pos_depla;

    pos_depla.x = 0;
    pos_depla.y = 0;
    while (pos_reset.x != pos_actual.x) {
        if (pos_reset.x > pos_actual.x) {
            pos_depla.x = 1;
            pos_depla.y = 0;
        }
        if (pos_reset.x < pos_actual.x) {
            pos_depla.x = -1;
            pos_depla.y = 0;
        }
        sfView_move(dt->wrd->vi->view, pos_depla);
        pos_actual = sfView_getCenter(dt->wrd->vi->view);
    }
}

void reset_view_y(source_t *dt, sfVector2f pos_actual, sfVector2f pos_reset)
{
    sfVector2f pos_depla;

    pos_depla.x = 0;
    pos_depla.y = 0;
    while (pos_reset.y != pos_actual.y) {
        if (pos_reset.y > pos_actual.y) {
            pos_depla.x = 0;
            pos_depla.y = 1;
        }
        if (pos_reset.y < pos_actual.y) {
            pos_depla.x = 0;
            pos_depla.y = -1;
        }
        sfView_move(dt->wrd->vi->view, pos_depla);
        pos_actual = sfView_getCenter(dt->wrd->vi->view);
    }
}

void reset_to_zero_view(source_t *dt)
{
    sfVector2f pos_actual = sfView_getCenter(dt->wrd->vi->view);
    sfVector2f pos_reset;

    dt->wrd->vi->save_pos = pos_actual;
    pos_reset.x = 960;
    pos_reset.y = 540;
    reset_view_x(dt, pos_actual, pos_reset);
    reset_view_y(dt, pos_actual, pos_reset);
    sfRenderWindow_setView(dt->wind, dt->wrd->vi->view);
}

void destroy_world_bis(source_t *dt)
{
    sfTexture_destroy(dt->wrd->hud_dial->tex);
    sfSprite_destroy(dt->wrd->save->spr);
    sfTexture_destroy(dt->wrd->save->tex);
    sfView_destroy(dt->wrd->vi->view);
    sfSprite_destroy(dt->wrd->bg->spr);
    sfTexture_destroy(dt->wrd->bg->tex);
}

void destroy_world(source_t *dt)
{
    sfMusic_destroy(dt->wrd->ost);
    sfText_destroy(dt->wrd->pv->text);
    sfText_destroy(dt->wrd->level->text);
    sfSprite_destroy(dt->wrd->hud_inv->spr);
    sfTexture_destroy(dt->wrd->hud_inv->tex);
    sfSprite_destroy(dt->wrd->shovel->spr);
    sfTexture_destroy(dt->wrd->shovel->tex);
    sfSprite_destroy(dt->wrd->nain->spr);
    sfTexture_destroy(dt->wrd->nain->tex);
    sfSprite_destroy(dt->wrd->hud_quest->spr);
    sfTexture_destroy(dt->wrd->hud_quest->tex);
    sfText_destroy(dt->wrd->dialog->text);
    sfSprite_destroy(dt->pers->img->spr);
    sfTexture_destroy(dt->pers->img->tex);
    sfSprite_destroy(dt->wrd->hud_dial->spr);
    destroy_world_bis(dt);
}