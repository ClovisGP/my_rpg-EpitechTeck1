/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** event_end.c
*/
#include "../include/proto.h"

int clic_event_end(source_t *dt)
{
    if (((dt->end->retour->pos.x - 275) <= dt->pos_ms.x) && \
    ((dt->end->retour->pos.x + 500) >= dt->pos_ms.x) && \
    ((dt->end->retour->pos.y - 85) <= dt->pos_ms.y) && \
    ((dt->end->retour->pos.y + 150) >= dt->pos_ms.y)) {
        destroy_end_page(dt);
        if (create_media_menu(dt) == 84) return (84);
        dt->page = 1;
    }
    return (0);
}

int end_event(source_t *dt)
{
    sfText_setColor(dt->end->retour->text, sfBlack);
    if (((dt->end->retour->pos.x - 275) <= dt->pos_ms.x) && \
    ((dt->end->retour->pos.x + 500) >= dt->pos_ms.x) && \
    ((dt->end->retour->pos.y - 85) <= dt->pos_ms.y) && \
    ((dt->end->retour->pos.y + 150) >= dt->pos_ms.y))
        sfText_setColor(dt->end->retour->text, sfRed);
    if (dt->event.type == sfEvtMouseButtonPressed) {
        if (clic_event_end(dt) == 84)
            return (84);
    }
    return (0);
}