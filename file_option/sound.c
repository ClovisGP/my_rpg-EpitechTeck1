/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** sound.c
*/
#include "../include/proto.h"

void sound_min(source_t *dt)
{
    if (dt->sound_level > 0) {
        dt->sound_level = dt->sound_level - 2;
        sfText_setString(dt->option->sound->text, \
        my_int_to_str(dt->sound_level));
        sfMusic_setVolume(dt->option->ost, dt->sound_level);
    }
}

void sound_max(source_t *dt)
{
    if (dt->sound_level < 100) {
        dt->sound_level = dt->sound_level + 2;
        sfText_setString(dt->option->sound->text, \
        my_int_to_str(dt->sound_level));
        sfMusic_setVolume(dt->option->ost, dt->sound_level);
    }
}