/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** event_option.c
*/
#include "../include/proto.h"

void replace_view_x(source_t *dt, sfVector2f pos_actual, sfVector2f pos_reset)
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

void replace_view_y(source_t *dt, sfVector2f pos_actual, sfVector2f pos_reset)
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

void replace_view(source_t *dt)
{
    sfVector2f pos_actual = sfView_getCenter(dt->wrd->vi->view);
    sfVector2f pos_reset;

    pos_reset.x = dt->wrd->vi->save_pos.x;
    pos_reset.y = dt->wrd->vi->save_pos.y;
    replace_view_x(dt, pos_actual, pos_reset);
    replace_view_y(dt, pos_actual, pos_reset);
    sfRenderWindow_setView(dt->wind, dt->wrd->vi->view);
}

int clic_option_menu_four(source_t *dt)
{
    int norme = 0;

    if ((0 <= dt->pos_ms.x && 100 >= dt->pos_ms.x) && \
    (0 <= dt->pos_ms.y && 100 >= dt->pos_ms.y)) {
        destroy_option(dt);
        replace_view(dt);
        dt->page = 2;
    }
    norme++;
    if ((705 <= dt->pos_ms.x && 825 >= dt->pos_ms.x) && \
    (406 <= dt->pos_ms.y && 495 >= dt->pos_ms.y))
        sound_min(dt);
    if ((1051 <= dt->pos_ms.x && 1195 >= dt->pos_ms.x) && \
    (405 <= dt->pos_ms.y && 496 >= dt->pos_ms.y))
        sound_max(dt);
    event_conf(dt);
    return (0);
}

int option_event_four(source_t *dt)
{
    if (dt->event.type == sfEvtMouseButtonPressed)
        return (clic_option_menu_four(dt));
}