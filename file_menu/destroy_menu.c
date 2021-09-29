/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** destroy_menu.c
*/
#include "../include/proto.h"

void destroy_menu(source_t *dt)
{
    sfMusic_destroy(dt->menu->ost);
    sfText_destroy(dt->menu->play->text);
    sfText_destroy(dt->menu->play_fem->text);
    sfText_destroy(dt->menu->exit->text);
    sfText_destroy(dt->menu->option->text);
    sfText_destroy(dt->menu->conti->text);
    sfText_destroy(dt->menu->explain->text);
    sfText_destroy(dt->menu->credit->text);
    sfSprite_destroy(dt->menu->bg->spr);
    sfTexture_destroy(dt->menu->bg->tex);
}