/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** init_inventory.c
*/
#include "../../../../include/proto.h"

bool init_inv(t_game_char *ch)
{
    ch->inv = NULL;
    int vreturn = 0;
    vreturn = inventory_background(ch, INVENTORY_PATH);
    return ((vreturn == 0) ? 0 : 1);
}

void add_item(t_game_char *ch, t_game_item *item, int type, int item_p)
{
    int vreturn = 0;
    switch (type){
    case WEAPON:
        vreturn = add_node_weapon(&ch->inv, &item->weapon[item_p], ch->stuff);
        stat_stick_weapon(ch);
        break;
    case ARMOR:
        vreturn = add_node_armor(&ch->inv, &item->armor[item_p], ch->stuff);
        stat_stick_armor(ch);
        break;
    case ITEM:
        vreturn = add_node_item(&ch->inv, &item->item[item_p]);
        break;
    }
}