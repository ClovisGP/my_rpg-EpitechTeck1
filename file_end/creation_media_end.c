/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** creation_end.c
*/
#include "../include/proto.h"

int create_text_end(source_t *dt)
{
    dt->end->retour->text = sfText_create();
    sfText_setFont(dt->end->retour->text, dt->princ);
    sfText_setCharacterSize(dt->end->retour->text, 40);
    sfText_setColor(dt->end->retour->text, sfBlack);
    dt->end->retour->pos.x = 35;
    dt->end->retour->pos.y = 80;
    sfText_setPosition(dt->end->retour->text, dt->end->retour->pos);
    sfText_setString(dt->end->retour->text, "Retour au menu");
    return (0);
}

int create_sprite_end(source_t *dt)
{
    if (dt->pers->pv > 0)
        dt->end->bg->tex = sfTexture_createFromFile("resc/bg/win.jpg", NULL);
    else
        dt->end->bg->tex = sfTexture_createFromFile("resc/bg/lost.jpg", NULL);
    if (!dt->end->bg->tex)
        return (84);
    dt->end->bg->spr = sfSprite_create();
    sfSprite_setTexture(dt->end->bg->spr, dt->end->bg->tex, sfTrue);
}

int creation_music_end(source_t *dt)
{
    dt->end->ost = sfMusic_createFromFile("resc/music_menu.ogg");
    if (!dt->end->ost) return (84);
    sfMusic_setLoop(dt->end->ost, 1);
    sfMusic_play(dt->end->ost);
    sfMusic_setVolume(dt->end->ost, dt->sound_level);
    return (0);
}

int creation_media_end(source_t *dt)
{
    int norme = 0;

    if (create_sprite_end(dt) == 84) return (84);
    if (create_text_end(dt) == 84) return (84);
    norme++;
    if (creation_music_end(dt) == 84) return (84);
    return (0);
}