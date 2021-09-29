/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** remove_node.c
*/
#include "../../../include/proto.h"

void removed(char *name)
{
    my_putstr("Succesfully removed: \t");
    my_putstr_nc(name, '\n');
}

void remove_weapon_node(t_game_char **ch, t_inventory **inv, int id)
{
    ch[0]->stuff->weapon = 0;
    t_inventory *tmp = *inv;
    t_inventory *prev;
    if (tmp && tmp->id == id){
        *inv = tmp->next;
        removed(tmp->weapon->name);
        free(tmp);
        return;
    }
    while (tmp && tmp->id != id){
        prev = tmp;
        tmp = prev->next;
    }
    if (!tmp){my_printf("Item doesn't exist\n"); return;}
    prev->next = tmp->next;
    removed(tmp->weapon->name);
    free(tmp);
    return;
}

void remove_armor_node(t_game_char **ch, t_inventory **inv, int id)
{
    ch[0]->stuff->armor = 0;
    t_inventory *tmp = *inv;
    t_inventory *prev;
    if (tmp && tmp->id == id){
        *inv = tmp->next;
        removed(tmp->armor->name);
        free(tmp);
        return;
    }
    while (tmp && tmp->id != id){
        prev = tmp;
        tmp = prev->next;
    }
    if (!tmp){my_printf("Item doesn't exist\n"); return;}
    prev->next = tmp->next;
    removed(tmp->armor->name);
    free(tmp);
    return;
}

void remove_item_node(t_inventory **inv, int id)
{
    t_inventory *tmp = *inv;
    t_inventory *prev;
    if (tmp && tmp->id == id){
        *inv = tmp->next;
        removed(tmp->item->name);
        free(tmp);
        return;
    }
    while (tmp && tmp->id != id){
        prev = tmp;
        tmp = prev->next;
    }
    if (!tmp){my_printf("Item doesn't exist\n"); return;}
    prev->next = tmp->next;
    removed(tmp->item->name);
    free(tmp);
    return;
}

void remove_game_object(t_game_char *ch, int type, int id)
{
    my_putstr("Removing from inventory\n");
    switch (type){
    case WEAPON:
        remove_weapon_node(&ch, &ch->inv, id);
        break;
    case ARMOR:
        remove_armor_node(&ch, &ch->inv, id);
        break;
    case ITEM:
        remove_item_node(&ch->inv, id);
        break;
    }
}