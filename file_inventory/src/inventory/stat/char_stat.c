/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** char_stat.c
*/
#include "../../../../include/proto.h"

void char_base_stat(t_game_char *ch)
{
    ch->bagi = ch->agi = 10;
    ch->bdef = ch->def = 10;
    ch->bhp = ch->hp = 100;
    ch->bmana = ch->mana = 50;
    ch->bspr = ch->spr = 10;
    ch->bstr = ch->str = 10;
    ch->batk = ch->atk = 10;
    ch->bcrit = ch->crit = 10;
    ch->bcrit_dmg = ch->crit_dmg = 1;
    ch->bspd = ch->spd = 10;
    ch->blvl = ch->lvl = 1;
    ch->bspldmg = ch->spldmg = 10;
    return;
}

bool init_char(t_game_char *ch, char *name)
{
    ch->name = my_strdup(name);
    if (!ch->name) return (0);
    ch->xp = 0;
    ch->xp_limit = 10;
    ch->stuff->armor = 0;
    ch->stuff->weapon = 0;
    char_base_stat(ch);
    return (1);
}