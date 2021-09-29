/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** atm_stat.c
*/
#include "../../../../include/proto.h"

void add_bombe(t_item *item, int ilvl)
{
    item->carry_limit = BCARRYLIMIT;
    item->atk = ilvl * 10;
    item->recorvery = 0;
    item->cure = 0;
    return;
}

void add_potion(t_item *item, int ilvl)
{
    item->carry_limit = PCARRYLIMIT;
    item->atk = 0;
    item->recorvery = PRECORVERY;
    item->cure = 0;
    return;
}

void add_cure(t_item *item, int ilvl)
{
    item->carry_limit = CCARYLIMT;
    item->atk = 0;
    item->cure = 1;
    item->recorvery = 0;
}

void atm_stat_switch(t_item *item, int ilvl, int type)
{
    switch (type){
    case BOMBE:
        add_bombe(item, ilvl);
        break;
    case POTION:
        add_potion(item, ilvl);
        break;
    case ANTIDOTE:
        add_cure(item, ilvl);
        break;
    }
    return;
}

void item_init_stat(t_item *item, int ilvl, int type)
{
    atm_stat_switch(item, ilvl, type);
}