/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** inventory.c
*/
#include "../../../include/proto.h"

void in_the_game(t_char_inv *c)
{
    add_item(c->ch, c->item, WEAPON, PSWORD);
    add_item(c->ch, c->item, WEAPON, PSTAFF);
    add_item(c->ch, c->item, ARMOR, PWARMOG);
    add_item(c->ch, c->item, ITEM, PBOMB);
    add_item(c->ch, c->item, ITEM, PCURE);
    add_item(c->ch, c->item, ITEM, PPOPO);
}

bool inventory(t_char_inv *c)
{
    c->item = malloc(sizeof(*c->item) * NBGAMEITEM);
    if (!c->item) return (0);

    c->ch = malloc(sizeof(*c->ch) * NBCHAR);
    if (!c->ch) {free(c->item); return (0);}

    c->ch->stuff = malloc(sizeof(*c->ch->stuff));
    if (!c->ch->stuff) {free(c->item); free(c->ch); return (0);}

    c->item->weapon = malloc(sizeof(*c->item->weapon) * NBWEAPON);
    if (!c->item->weapon) {free_four(c); return (0);}

    c->item->armor = malloc(sizeof(*c->item->armor) * NBARMOR);
    if (!c->item->armor) {free_one(c); return (0);}

    c->item->item = malloc(sizeof(*c->item->item) * NBITEM);
    if (!c->item->weapon) {free_two(c); return (0);}

    if (!init_char(c->ch, CHARNAME)) {free_three(c); return (0);}
    if (!init_weap(c->item)) {free_item(c); return (0);}
    if (!init_arm(c->item)) {free_item(c); return (0);}
    if (!init_atm(c->item)) {free_item(c); return (0);}
    init_inv(c->ch);
    inventory_setposotion(c);
    in_the_game(c);
    return (1);
}