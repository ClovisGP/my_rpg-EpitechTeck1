/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** display_option.c
*/
#include "../include/proto.h"

void display_option_four(source_t *dt)
{
    if (dt->page == 4) {
        sfRenderWindow_drawSprite(dt->wind, dt->option->bg->spr, NULL);
        sfRenderWindow_drawText(dt->wind, dt->option->sound->text, NULL);
        conf(dt);
        sfRenderWindow_drawText(dt->wind, dt->option->conf_1->text, NULL);
        sfRenderWindow_drawText(dt->wind, dt->option->conf_2->text, NULL);
        sfRenderWindow_drawText(dt->wind, dt->option->conf_3->text, NULL);
        sfRenderWindow_drawText(dt->wind, \
        dt->option->conf_explain->text, NULL);
    }
}