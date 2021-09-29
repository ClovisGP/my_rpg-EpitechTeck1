/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** event_option.c
*/
#include "../include/proto.h"

int clic_option_menu(source_t *dt)
{
    int norme = 0;

    if ((0 <= dt->pos_ms.x && 100 >= dt->pos_ms.x) && \
    (0 <= dt->pos_ms.y && 100 >= dt->pos_ms.y)) {
        destroy_option(dt);
        if (create_media_menu(dt) == 84) return (84);
        dt->page = 1;
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

int option_event(source_t *dt)
{
    if (sfKeyboard_isKeyPressed(dt->quit)) {
        destroy_option(dt);
        if (create_media_menu(dt) == 84) return (84);
        dt->page = 1;
    }
    if (dt->event.type == sfEvtMouseButtonPressed)
        return (clic_option_menu(dt));
}