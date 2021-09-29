/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** inventory_draw.c
*/
#include "../../../../include/proto.h"

void norme_draw_weapon(source_t *dt, t_inventory *cursor)
{
    sfRenderWindow_drawSprite(dt->wind, cursor->weapon->sprt, NULL);
}

void norme_draw_armor(source_t *dt, t_inventory *cursor)
{
    sfRenderWindow_drawSprite(dt->wind, cursor->armor->sprt, NULL);
}

void norme_draw_item(source_t *dt, t_inventory *cursor)
{
    sfRenderWindow_drawSprite(dt->wind, cursor->item->sprt, NULL);
}

void iventory_draw(source_t *dt)
{
    t_inventory *cursor = dt->c.ch->inv;
    sfRenderWindow_drawSprite(dt->wind, dt->c.ch->inv_spr, NULL);
    while (cursor){
        if (cursor->type == WEAPON)
            norme_draw_weapon(dt, cursor);
        if (cursor->type == ARMOR)
            norme_draw_armor(dt, cursor);
        if (cursor->type == ITEM)
            norme_draw_item(dt, cursor);
        cursor = cursor->next;
    }
    free(cursor);
    return;
}