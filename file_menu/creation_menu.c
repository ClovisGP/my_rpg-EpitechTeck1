/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** creation_menu.c
*/
#include "../include/proto.h"

int create_sprite_menu(source_t *dt)
{
    dt->menu->bg->tex = sfTexture_createFromFile("resc/bg/menu.jpg", NULL);
    if (!dt->menu->bg->tex)
        return (84);
    dt->menu->bg->spr = sfSprite_create();
    sfSprite_setTexture(dt->menu->bg->spr, dt->menu->bg->tex, sfTrue);
}

int creation_music_menu(source_t *dt)
{
    dt->menu->ost = sfMusic_createFromFile("resc/music_menu.ogg");
    if (!dt->menu->ost) return (84);
    sfMusic_setLoop(dt->menu->ost, 1);
    sfMusic_play(dt->menu->ost);
    sfMusic_setVolume(dt->menu->ost, dt->sound_level);
    return (0);
}

int create_media_menu(source_t *dt)
{
    int norme = 0;

    if (create_sprite_menu(dt) == 84) return (84);
    if (create_text_menu(dt) == 84) return (84);
    norme++;
    if (creation_music_menu(dt) == 84) return (84);
    return (0);
}