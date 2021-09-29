/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** display_menu.c
*/
#include "../include/proto.h"

void display_menu(source_t *dt)
{
    if (dt->page == 1) {
        sfRenderWindow_drawSprite(dt->wind, dt->menu->bg->spr, NULL);
        sfRenderWindow_drawText(dt->wind, dt->menu->play->text, NULL);
        sfRenderWindow_drawText(dt->wind, dt->menu->play_fem->text, NULL);
        sfRenderWindow_drawText(dt->wind, dt->menu->exit->text, NULL);
        sfRenderWindow_drawText(dt->wind, dt->menu->option->text, NULL);
        sfRenderWindow_drawText(dt->wind, dt->menu->conti->text, NULL);
        sfRenderWindow_drawText(dt->wind, dt->menu->explain->text, NULL);
        sfRenderWindow_drawText(dt->wind, dt->menu->credit->text, NULL);
    }
}