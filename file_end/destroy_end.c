/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** destroy_end.c
*/
#include "../include/proto.h"

void destroy_end_page(source_t *dt)
{
    sfMusic_destroy(dt->end->ost);
    sfText_destroy(dt->end->retour->text);
    sfSprite_destroy(dt->end->bg->spr);
    sfTexture_destroy(dt->end->bg->tex);
}