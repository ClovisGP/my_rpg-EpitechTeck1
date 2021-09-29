/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** destroy_option.c
*/
#include "../include/proto.h"

void destroy_option(source_t *dt)
{
    sfMusic_destroy(dt->option->ost);
    sfText_destroy(dt->option->conf_1->text);
    sfText_destroy(dt->option->conf_2->text);
    sfText_destroy(dt->option->conf_3->text);
    sfText_destroy(dt->option->conf_explain->text);
    sfText_destroy(dt->option->sound->text);
    sfSprite_destroy(dt->option->bg->spr);
    sfTexture_destroy(dt->option->bg->tex);
}