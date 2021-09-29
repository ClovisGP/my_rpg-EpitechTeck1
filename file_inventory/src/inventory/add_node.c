/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** add_node.c
*/
#include "../../../include/proto.h"

int add_node_weapon(t_inventory **inv, t_equipement *weapon, t_chstuff *stuff)
{
    if (stuff->weapon == 1) return (4);
    t_inventory *tmp = malloc(sizeof(*tmp));
    if (tmp){
        t_inventory *new = tmp;
        new->weapon = weapon;
        new->armor = NULL;
        new->item = NULL;
        new->id = weapon->id;
        new->type = WEAPON;
        new->next = *inv;
        *inv = new;
        stuff->weapon = 1;
        return (1);
    }
    stuff->weapon = 0;
    return (0);
}

bool add_node_item(t_inventory **inv, t_item *item)
{
    t_inventory *tmp = malloc(sizeof(*tmp));
    if (tmp){
        t_inventory *new = tmp;
        new->weapon = NULL;
        new->armor = NULL;
        new->id = item->id;
        new->item = item;
        new->type = ITEM;
        new->next = *inv;
        *inv = new;
        return (1);
    }
    return (0);
}

int add_node_armor(t_inventory **inv, t_equipement *armor, t_chstuff *stuff)
{
    if (stuff->armor == 1) return (4);
    t_inventory *tmp = malloc(sizeof(*tmp));
    if (tmp){
        t_inventory *new = tmp;
        new->weapon = NULL;
        new->id = armor->id;
        new->armor = armor;
        new->item = NULL;
        new->type = ARMOR;
        new->next = *inv;
        *inv = new;
        stuff->armor = 1;
        return (1);
    }
    stuff->armor = 0;
    return (0);
}