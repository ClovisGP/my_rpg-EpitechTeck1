/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** event_menu.c
*/
#include "../include/proto.h"

int event_menu_bis_bis(source_t *dt)
{
    sfText_setColor(dt->menu->credit->text, sfBlack);
    if (((dt->menu->credit->pos.x - 190) <= dt->pos_ms.x) && \
    ((dt->menu->credit->pos.x + 360) >= dt->pos_ms.x) && \
    ((dt->menu->credit->pos.y - 75) <= dt->pos_ms.y) && \
    ((dt->menu->credit->pos.y + 100) >= dt->pos_ms.y))
        sfText_setColor(dt->menu->credit->text, sfRed);
    if (dt->event.type == sfEvtMouseButtonPressed) {
        if (clic_event_menu(dt) == 84)
            return (84);
    }
    return (0);
}

int event_menu_bis(source_t *dt)
{
    sfText_setColor(dt->menu->option->text, sfBlack);
    if (((dt->menu->option->pos.x - 190) <= dt->pos_ms.x) && \
    ((dt->menu->option->pos.x + 360) >= dt->pos_ms.x) && \
    ((dt->menu->option->pos.y - 75) <= dt->pos_ms.y) && \
    ((dt->menu->option->pos.y + 100) >= dt->pos_ms.y))
        sfText_setColor(dt->menu->option->text, sfRed);
    sfText_setColor(dt->menu->explain->text, sfBlack);
    if (((dt->menu->explain->pos.x - 250) <= dt->pos_ms.x) && \
    ((dt->menu->explain->pos.x + 550) >= dt->pos_ms.x) && \
    ((dt->menu->explain->pos.y - 75) <= dt->pos_ms.y) && \
    ((dt->menu->explain->pos.y + 100) >= dt->pos_ms.y))
        sfText_setColor(dt->menu->explain->text, sfRed);
    sfText_setColor(dt->menu->play_fem->text, sfBlack);
    if (((dt->menu->play_fem->pos.x - 50) <= dt->pos_ms.x) && \
    ((dt->menu->play_fem->pos.x + 350) >= dt->pos_ms.x) && \
    ((dt->menu->play_fem->pos.y - 75) <= dt->pos_ms.y) && \
    ((dt->menu->play_fem->pos.y + 100) >= dt->pos_ms.y))
        sfText_setColor(dt->menu->play_fem->text, sfRed);
    return (event_menu_bis_bis(dt));
}

int event_menu(source_t *dt)
{
    sfText_setColor(dt->menu->play->text, sfBlack);
    if (((dt->menu->play->pos.x - 100) <= dt->pos_ms.x) && \
    ((dt->menu->play->pos.x + 300) >= dt->pos_ms.x) && \
    ((dt->menu->play->pos.y - 75) <= dt->pos_ms.y) && \
    ((dt->menu->play->pos.y + 100) >= dt->pos_ms.y))
        sfText_setColor(dt->menu->play->text, sfRed);
    sfText_setColor(dt->menu->exit->text, sfBlack);
    if (((dt->menu->exit->pos.x - 200) <= dt->pos_ms.x) && \
    ((dt->menu->exit->pos.x + 300) >= dt->pos_ms.x) && \
    ((dt->menu->exit->pos.y - 75) <= dt->pos_ms.y) && \
    ((dt->menu->exit->pos.y + 100) >= dt->pos_ms.y))
        sfText_setColor(dt->menu->exit->text, sfRed);
    sfText_setColor(dt->menu->conti->text, sfBlack);
    if (((dt->menu->conti->pos.x - 270) <= dt->pos_ms.x) && \
    ((dt->menu->conti->pos.x + 610) >= dt->pos_ms.x) && \
    ((dt->menu->conti->pos.y - 75) <= dt->pos_ms.y) && \
    ((dt->menu->conti->pos.y + 100) >= dt->pos_ms.y))
        sfText_setColor(dt->menu->conti->text, sfRed);
    return (event_menu_bis(dt));
}