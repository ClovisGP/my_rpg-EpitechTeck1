/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** csfml_functions.c
*/
#include "fight.h"

sfSprite *load_sprite(char *image_path)
{
    sfTexture *texture;
    sfSprite *sprite;

    texture = sfTexture_createFromFile(image_path, NULL);
    if (!texture) return (NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    return (sprite);
}

int load_ress(source_t *src)
{
    src->amau->ft->antid_spr = load_sprite("resc/antidot.png");
    if (!src->amau->ft->antid_spr) return (84);
    src->amau->ft->hltpo_spr = load_sprite("resc/health_potion.png");
    if (!src->amau->ft->hltpo_spr) return (84);
    src->amau->ft->batlfld_spr = load_sprite("resc/fight_battlefield.png");
    if (!src->amau->ft->batlfld_spr) return (84);
    src->amau->ft->bomb_spr = load_sprite("resc/bomb.png");
    if (!src->amau->ft->bomb_spr) return (84);
    src->amau->ft->hero = load_sprite("resc/hero.png");
    if (!src->amau->ft->hero) return (84);
    src->amau->ft->pv = load_text("default", "file_fights/komodor.ttf");
    if (!src->amau->ft->pv) return (84);
    src->amau->ft->pm = load_text("default", "file_fights/komodor.ttf");
    if (!src->amau->ft->pm) return (84);
    src->amau->escape_spr = load_sprite("resc/escape.jpg");
    if (!src->amau->escape_spr) return (84);
    return (0);
}

void sprite_setpos(sfSprite *sprite, int x, int y)
{
    sfVector2f pos;

    pos.x = x;
    pos.y = y;
    sfSprite_setPosition(sprite, pos);
}

void sprite_setscale(sfSprite *sprite, int x, int y)
{
    sfVector2f scale;

    scale.x = x;
    scale.y = y;
    sfSprite_setScale(sprite, scale);
}