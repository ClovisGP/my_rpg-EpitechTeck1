/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** put this at the end of the loop
*/
#include "../../../../include/proto.h"

bool stat_stick_weapon(t_game_char *ch)
{
    t_inventory *cursor = ch->inv;
    if (!cursor) return (0);
    while (cursor->type != WEAPON)
        cursor = cursor->next;
    ch->atk += cursor->weapon->atk;
    ch->agi += cursor->weapon->agi;
    ch->spd += cursor->weapon->spd;
    ch->mana += cursor->weapon->mana;
    ch->def += cursor->weapon->def;
    ch->spldmg += cursor->weapon->spldmg;
    ch->hp += cursor->weapon->hp;
    ch->crit += cursor->weapon->crit;
    ch->crit_dmg += cursor->weapon->crit_dmg;
    return (1);
}

bool stat_stick_armor(t_game_char *ch)
{
    t_inventory *cursor = ch->inv;
    if (!cursor) return (0);
    while (cursor->type != ARMOR)
        cursor = cursor->next;
    ch->atk += cursor->armor->atk;
    ch->agi += cursor->armor->agi;
    ch->spd += cursor->armor->spd;
    ch->mana += cursor->armor->mana;
    ch->def += cursor->armor->def;
    ch->spldmg += cursor->armor->spldmg;
    ch->hp += cursor->armor->hp;
    ch->crit += cursor->armor->crit;
    ch->crit_dmg += cursor->armor->crit_dmg;
    return (1);
}