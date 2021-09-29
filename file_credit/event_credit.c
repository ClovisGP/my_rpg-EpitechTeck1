/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** event_end.c
*/
#include "../include/proto.h"

int clic_event_credit(source_t *dt)
{
    if ((0 <= dt->pos_ms.x) && (100 >= dt->pos_ms.x) && \
    (0 <= dt->pos_ms.y) && (100 >= dt->pos_ms.y)) {
        destroy_credit(dt);
        if (create_media_menu(dt) == 84) return (84);
        dt->page = 1;
    }
    return (0);
}

int credit_event(source_t *dt)
{
    if (sfKeyboard_isKeyPressed(dt->quit)) {
        destroy_credit(dt);
        if (create_media_menu(dt) == 84) return (84);
        dt->page = 1;
    }
    if (dt->event.type == sfEvtMouseButtonPressed) {
        if (clic_event_credit(dt) == 84)
            return (84);
    }
    return (0);
}