/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** event_menu.c
*/
#include "../include/proto.h"

int clic_envent_menu_bis_bis_bis(source_t *dt)
{
    if (((dt->menu->play_fem->pos.x - 50) <= dt->pos_ms.x) && \
    ((dt->menu->play_fem->pos.x + 350) >= dt->pos_ms.x) && \
    ((dt->menu->play_fem->pos.y - 75) <= dt->pos_ms.y) && \
    ((dt->menu->play_fem->pos.y + 100) >= dt->pos_ms.y)) {
        destroy_menu(dt);
        dt->pers->is_man = 1;
        if (create_media_world(dt) == 84) return (84);
        dt->page = 2;
    }
    return (0);
}

int clic_envent_menu_bis_bis(source_t *dt)
{
    if (((dt->menu->explain->pos.x - 250) <= dt->pos_ms.x) && \
    ((dt->menu->explain->pos.x + 550) >= dt->pos_ms.x) && \
    ((dt->menu->explain->pos.y - 75) <= dt->pos_ms.y) && \
    ((dt->menu->explain->pos.y + 100) >= dt->pos_ms.y)) {
        destroy_menu(dt);
        if (create_media_credit(dt, 0) == 84) return (84);
        dt->page = 7;
    }
    if (((dt->menu->credit->pos.x - 190) <= dt->pos_ms.x) && \
    ((dt->menu->credit->pos.x + 360) >= dt->pos_ms.x) && \
    ((dt->menu->credit->pos.y - 75) <= dt->pos_ms.y) && \
    ((dt->menu->credit->pos.y + 100) >= dt->pos_ms.y)) {
        destroy_menu(dt);
        if (create_media_credit(dt, 1) == 84) return (84);
        dt->page = 8;
    }
    return (clic_envent_menu_bis_bis_bis(dt));
}

int clic_envent_menu_bis(source_t *dt)
{
    if (((dt->menu->conti->pos.x - 270) <= dt->pos_ms.x) && \
    ((dt->menu->conti->pos.x + 610) >= dt->pos_ms.x) && \
    ((dt->menu->conti->pos.y - 75) <= dt->pos_ms.y) && \
    ((dt->menu->conti->pos.y + 100) >= dt->pos_ms.y)) {
        if (prepare_save(dt) == 84)
            return (84);
    }
    if (((dt->menu->option->pos.x - 190) <= dt->pos_ms.x) && \
    ((dt->menu->option->pos.x + 360) >= dt->pos_ms.x) && \
    ((dt->menu->option->pos.y - 75) <= dt->pos_ms.y) && \
    ((dt->menu->option->pos.y + 100) >= dt->pos_ms.y)) {
        destroy_menu(dt);
        if (create_media_option(dt) == 84) return (84);
        dt->page = 3;
    }
    return (clic_envent_menu_bis_bis(dt));
}

int clic_event_menu(source_t *dt)
{
    if (((dt->menu->play->pos.x - 100) <= dt->pos_ms.x) && \
    ((dt->menu->play->pos.x + 300) >= dt->pos_ms.x) && \
    ((dt->menu->play->pos.y - 75) <= dt->pos_ms.y) && \
    ((dt->menu->play->pos.y + 100) >= dt->pos_ms.y)) {
        destroy_menu(dt);
        dt->pers->is_man = 0;
        if (create_media_world(dt) == 84) return (84);
        dt->page = 2;
    }
    if (((dt->menu->exit->pos.x - 200) <= dt->pos_ms.x) && \
    ((dt->menu->exit->pos.x + 300) >= dt->pos_ms.x) && \
    ((dt->menu->exit->pos.y - 75) <= dt->pos_ms.y) && \
    ((dt->menu->exit->pos.y + 100) >= dt->pos_ms.y)) {
        destroy_menu(dt);
        dt->page = 0;
        sfRenderWindow_close(dt->wind);
    }
    return (clic_envent_menu_bis(dt));
}