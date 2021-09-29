/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** destroy_end.c
*/
#include "../include/proto.h"

void destroy_credit(source_t *dt)
{
    sfMusic_destroy(dt->credit->ost);
    sfSprite_destroy(dt->credit->bg->spr);
    sfTexture_destroy(dt->credit->bg->tex);
}