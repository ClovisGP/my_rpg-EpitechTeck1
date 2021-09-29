/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** creation_credit.c
*/
#include "../include/proto.h"

int create_sprite_credit(source_t *dt, int choice)
{
    if (choice == 0)
        dt->credit->bg->tex = sfTexture_createFromFile\
        ("resc/bg/explication.jpg", NULL);
    else
        dt->credit->bg->tex = sfTexture_createFromFile\
        ("resc/bg/credit.jpg", NULL);
    if (!dt->credit->bg->tex)
        return (84);
    dt->credit->bg->spr = sfSprite_create();
    sfSprite_setTexture(dt->credit->bg->spr, dt->credit->bg->tex, sfTrue);
}

int creation_music_credit(source_t *dt)
{
    dt->credit->ost = sfMusic_createFromFile("resc/music_menu.ogg");
    if (!dt->credit->ost) return (84);
    sfMusic_setLoop(dt->credit->ost, 1);
    sfMusic_play(dt->credit->ost);
    sfMusic_setVolume(dt->credit->ost, dt->sound_level);
    return (0);
}

int create_media_credit(source_t *dt, int choice)
{
    int norme = 0;

    if (create_sprite_credit(dt, choice) == 84) return (84);
    if (creation_music_credit(dt) == 84) return (84);
    return (0);
}