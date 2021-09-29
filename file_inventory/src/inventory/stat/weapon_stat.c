/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** weapon_stat.c
*/
#include "../../../../include/proto.h"

void add_stat_bow(t_equipement *weapon, int wlvl, int mana)
{
    weapon->atk = wlvl + 5;
    weapon->agi = 15 + wlvl;
    weapon->spd = 5 + wlvl * 3;
    weapon->mana = mana;
    weapon->def = 0;
    weapon->hp = wlvl;
    weapon->spldmg = wlvl;
}

void add_stat_staff(t_equipement *weapon, int wlvl, int mana)
{
    weapon->atk = wlvl;
    weapon->agi = wlvl;
    weapon->spd = 5 + wlvl * 2;
    weapon->mana = 10 + mana * wlvl;
    weapon->def = 10 + wlvl;
    weapon->hp = wlvl;
    weapon->spldmg = wlvl + 10;
}

void add_stat_sword(t_equipement *weapon, int wlvl, int mana)
{
    weapon->atk = wlvl + 9;
    weapon->agi = 10 + wlvl;
    weapon->spd = 5 + wlvl;
    weapon->mana = mana;
    weapon->def = 20 + wlvl;
    weapon->hp = wlvl;
    weapon->spldmg = wlvl;
}

void weapon_stat_switch(t_equipement *weapon, int wlvl, int mana, int type)
{
    switch (type){
    case BOW:
        add_stat_bow(weapon, wlvl, mana);
        break;
    case STAFF:
        add_stat_staff(weapon, wlvl, mana);
        break;
    case SWORD:
        add_stat_sword(weapon, wlvl, mana);
        break;
    }
}

void weapon_init_stat(t_equipement *weapon, int wlvl, int mana, int type)
{
    weapon->crit = (wlvl < 10) ? 20 : 75;
    weapon->crit_dmg = (wlvl < 10) ? 1.5 : 3;
    weapon->lvl_lmt = wlvl;
    weapon->type = type;
    weapon_stat_switch(weapon, wlvl, mana, type);
}