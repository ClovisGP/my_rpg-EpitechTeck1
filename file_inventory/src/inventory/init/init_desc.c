/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** init.c
*/
#include "../../../../include/proto.h"

bool weapon_init_desc(t_equipement *weapon, char *name, char *desc, int id)
{
    weapon->id = id;
    weapon->name = my_strdup(name);
    weapon->desc = my_strdup(desc);
    if (!weapon->name || !weapon->desc) return (0);
    return (1);
}

bool armor_init_desc(t_equipement *armor, char *name, char *desc, int id)
{
    armor->id = id + 10;
    armor->name = my_strdup(name);
    armor->desc = my_strdup(desc);
    if (!armor->name || !armor->desc) return (0);
    return (1);
}

bool item_init_desc(t_item *item, char *name, char *desc, int id)
{
    item->id = id + 20;
    item->name = my_strdup(name);
    item->desc = my_strdup(desc);
    if (!item->name || !item->desc) return (0);
    return (1);
}