/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** display_end.c
*/
#include "../include/proto.h"

void display_end(source_t *dt)
{
    if (dt->page == 5) {
        sfRenderWindow_drawSprite(dt->wind, dt->end->bg->spr, NULL);
        sfRenderWindow_drawText(dt->wind, dt->end->retour->text, NULL);
    }
}