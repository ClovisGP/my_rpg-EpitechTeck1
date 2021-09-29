/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** creation_world.c
*/
#include "../include/proto.h"

int create_sprite_world_bis_bis(source_t *dt)
{
    dt->wrd->hud_inv->tex = sfTexture_createFromFile\
    ("resc/inventaire.png", NULL);
    if (!dt->wrd->hud_inv->tex) return (84);
    dt->wrd->hud_inv->spr = sfSprite_create();
    sfSprite_setTexture(dt->wrd->hud_inv->spr, dt->wrd->hud_inv->tex, \
    sfTrue);
    dt->wrd->hud_inv->pos.x = 820;
    dt->wrd->hud_inv->pos.y = -340;
    sfSprite_setPosition(dt->wrd->hud_inv->spr, dt->wrd->hud_inv->pos);
    dt->wrd->save->tex = sfTexture_createFromFile("resc/save.jpg", NULL);
    if (!dt->wrd->save->tex) return (84);
    dt->wrd->save->spr = sfSprite_create();
    sfSprite_setTexture(dt->wrd->save->spr, dt->wrd->save->tex, sfTrue);
    dt->wrd->save->pos.x = -850;
    dt->wrd->save->pos.y = 490;
    sfSprite_setPosition(dt->wrd->save->spr, dt->wrd->save->pos);
    dt->wrd->save->rect.top = 0;
    dt->wrd->save->rect.left = 0;
    dt->wrd->save->rect.width = 300;
    dt->wrd->save->rect.height = 250;
    return (0);
}

int create_sprite_world_bis(source_t *dt)
{
    dt->wrd->hud_quest->tex = sfTexture_createFromFile\
    ("resc/hud_quest.jpg", NULL);
    if (!dt->wrd->hud_dial->tex) return (84);
    dt->wrd->hud_quest->spr = sfSprite_create();
    sfSprite_setTexture(dt->wrd->hud_quest->spr, dt->wrd->hud_quest->tex, \
    sfTrue);
    dt->wrd->hud_quest->pos.x = -850;
    dt->wrd->hud_quest->pos.y = -340;
    sfSprite_setPosition(dt->wrd->hud_quest->spr, dt->wrd->hud_quest->pos);
    dt->wrd->shovel->tex = sfTexture_createFromFile("resc/shovel.png", NULL);
    if (!dt->wrd->shovel->tex) return (84);
    dt->wrd->shovel->spr = sfSprite_create();
    sfSprite_setTexture(dt->wrd->shovel->spr, dt->wrd->shovel->tex, sfTrue);
    dt->wrd->nain->tex = sfTexture_createFromFile("resc/nain.png", NULL);
    if (!dt->wrd->nain->tex) return (84);
    dt->wrd->nain->spr = sfSprite_create();
    sfSprite_setTexture(dt->wrd->nain->spr, dt->wrd->nain->tex, sfTrue);
    return (create_sprite_world_bis_bis(dt));
}

int create_sprite_world(source_t *dt)
{
    dt->wrd->bg->tex = sfTexture_createFromFile("resc/bg/world.jpg", NULL);
    if (!dt->wrd->bg->tex) return (84);
    dt->wrd->bg->spr = sfSprite_create();
    sfSprite_setTexture(dt->wrd->bg->spr, dt->wrd->bg->tex, sfTrue);
    dt->wrd->bg->pos.x = -850;
    dt->wrd->bg->pos.y = -340;
    sfSprite_setPosition(dt->wrd->bg->spr, dt->wrd->bg->pos);
    dt->wrd->hud_dial->tex = sfTexture_createFromFile\
    ("resc/bulle_dialogue.jpg", NULL);
    if (!dt->wrd->hud_dial->tex) return (84);
    dt->wrd->hud_dial->spr = sfSprite_create();
    sfSprite_setTexture(dt->wrd->hud_dial->spr, dt->wrd->hud_dial->tex, \
    sfTrue);
    dt->wrd->hud_dial->pos.x = 570;
    dt->wrd->hud_dial->pos.y = 440;
    sfSprite_setPosition(dt->wrd->hud_dial->spr, dt->wrd->hud_dial->pos);
    if (create_sprite_world_bis(dt) == 84) return (84);
    if (creation_perso(dt) == 84) return (84);
    return (0);
}

int create_music_world(source_t *dt)
{
    dt->wrd->ost = sfMusic_createFromFile("resc/world.ogg");
    if (!dt->wrd->ost) return (84);
    sfMusic_setLoop(dt->wrd->ost, 1);
    sfMusic_play(dt->wrd->ost);
    sfMusic_setVolume(dt->wrd->ost, dt->sound_level);
    return (0);
}