/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** item_sprite_texture.c
*/
#include "../../../../include/proto.h"

bool armor_sprite_texture(t_equipement *armor, char *filepath)
{
    armor->sprt = sfSprite_create();
    if (!armor->sprt) return (0);
    armor->txt = sfTexture_createFromFile(filepath, NULL);
    if (!armor->txt) return (0);
    sfSprite_setTexture(armor->sprt, armor->txt, 0);
    return (1);
}

bool weapon_sprite_texture(t_equipement *weapon, char *filepath)
{
    weapon->sprt = sfSprite_create();
    if (!weapon->sprt) return (0);
    weapon->txt = sfTexture_createFromFile(filepath, NULL);
    if (!weapon->txt) return (0);
    sfSprite_setTexture(weapon->sprt, weapon->txt, 0);
    return (1);
}

bool item_sprite_texture(t_item *item, char *filepath)
{
    item->sprt = sfSprite_create();
    if (!item->sprt) return (0);
    item->txt = sfTexture_createFromFile(filepath, NULL);
    if (!item->txt) return (0);
    sfSprite_setTexture(item->sprt, item->txt, 0);
    return (1);
}

int inventory_background(t_game_char *ch, char *filepath)
{
    ch->inv_spr = sfSprite_create();
    if (!ch->inv_spr) return (5);
    if (!(ch->inv_tx = sfTexture_createFromFile(filepath, NULL))) return (6);
    sfSprite_setTexture(ch->inv_spr, ch->inv_tx, 0);
    return (7);
}