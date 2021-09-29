/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** display_end.c
*/
#include "../include/proto.h"

void display_credit(source_t *dt)
{
    if (dt->page == 7 || dt->page == 8) {
        sfRenderWindow_drawSprite(dt->wind, dt->credit->bg->spr, NULL);
    }
}