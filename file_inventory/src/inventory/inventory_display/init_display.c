/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** init_display.c
*/
#include "../../../../include/proto.h"

int inv_event(source_t *dt)
{
    sfBool key = sfKeyboard_isKeyPressed(sfKeyU);
    if (key && dt->page == WORLD_PAGE) {
        dt->page = INV_PAGE;
        sfRenderWindow_clear(dt->wind, sfBlack);
        reset_to_zero_view(dt);
    }
    key = sfKeyboard_isKeyPressed(sfKeyC);
    if (key && dt->page == INV_PAGE) {
        dt->page = WORLD_PAGE;
        inv_clear(dt);
        replace_view(dt);
    }
    return (0);
}

void inv_display(source_t *dt)
{
    if (dt->page == INV_PAGE) {
        iventory_draw(dt);
    }
    return;
}

void inv_clear(source_t *dt)
{
    sfRenderWindow_clear(dt->wind, sfBlack);
    dt->page = WORLD_PAGE;
}