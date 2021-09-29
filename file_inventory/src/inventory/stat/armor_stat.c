/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** armor_stat.c
*/
#include "../../../../include/proto.h"

void add_stat_earmor(t_equipement *armor, int alvl, int mana)
{
    armor->atk = 0;
    armor->def = alvl;
    armor->hp = 10 + alvl;
    armor->agi = 4 * alvl + 5;
    armor->mana = 5 + alvl;
    armor->spd = alvl * 2 + 2;
    armor->spldmg = alvl + 5;
}

void add_stat_marmor(t_equipement *armor, int alvl, int mana)
{
    armor->atk = 0;
    armor->def = alvl * 2;
    armor->hp = 10 + alvl;
    armor->agi = alvl + 5;
    armor->mana = 5 * alvl + 10;
    armor->spd = alvl * 2;
    armor->spldmg = alvl + 10;
}

void add_stat_warmor(t_equipement *armor, int alvl, int mana)
{
    armor->atk = 0;
    armor->def = alvl;
    armor->hp = 3 + alvl + 10;
    armor->agi = alvl;
    armor->mana = 5 + alvl;
    armor->spd = alvl;
    armor->spldmg = alvl + 1;
}

void armor_stat_switch(t_equipement *armor, int alvl, int mana, int type)
{
    switch (type){
    case ELF:
        add_stat_earmor(armor, alvl, mana);
        break;
    case MAGE:
        add_stat_marmor(armor, alvl, mana);
        break;
    case WARRIOR:
        add_stat_warmor(armor, alvl, mana);
        break;
    }
}

void armor_init_stat(t_equipement *armor, int alvl, int mana, int type)
{
    armor->lvl_lmt = alvl;
    armor->type = type;
    armor->crit = alvl * 2;
    armor->crit_dmg = alvl * 2;
    armor_stat_switch(armor, alvl, mana, type);
}