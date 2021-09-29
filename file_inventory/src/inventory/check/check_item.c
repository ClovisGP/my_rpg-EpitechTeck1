/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** check_item.c
*/
#include "../../../../include/proto.h"

void check_armor(t_equipement *armor)
{
    my_printf("%s\n", armor->name);
    my_putstr(armor->desc);
    my_put_nbrstr(armor->agi, ":agi ");
    my_put_nbrstr(armor->atk, ":atk ");
    my_put_nbrstr(armor->crit, ":tcc ");
    my_put_nbrstr(armor->crit_dmg, ":dcc ");
    my_put_nbrstr(armor->def, ":def ");
    my_put_nbrstr(armor->hp, ":hp ");
    my_put_nbrstr(armor->id, ":id ");
    my_put_nbrstr(armor->lvl_lmt, ":lvl ");
    my_put_nbrstr(armor->mana, ":mana ");
    my_put_nbrstr(armor->spd, ":mana ");
    my_put_nbrstr(armor->spldmg, ":spldmg ");
    my_put_nbrstr(armor->type, ":type \n\n");
}

void check_weapon(t_equipement *weapon)
{
    my_putstr_nc(weapon->name, '\n');
    my_putstr(weapon->desc);
    my_put_nbrstr(weapon->agi, ":agi ");
    my_put_nbrstr(weapon->atk, ":atk ");
    my_put_nbrstr(weapon->crit, ":tcc ");
    my_put_nbrstr(weapon->crit_dmg, ":dcc ");
    my_put_nbrstr(weapon->def, ":def ");
    my_put_nbrstr(weapon->hp, ":hp ");
    my_put_nbrstr(weapon->id, ":id ");
    my_put_nbrstr(weapon->lvl_lmt, ":lvl ");
    my_put_nbrstr(weapon->mana, ":mana ");
    my_put_nbrstr(weapon->spd, ":mana ");
    my_put_nbrstr(weapon->spldmg, ":spldmg ");
    my_put_nbrstr(weapon->type, ":type \n\n");
}

void check_utilities(t_item *item)
{
    my_putstr_nc(item->name, '\n');
    my_putstr(item->desc);
    my_put_nbrstr(item->atk, ":atk ");
    my_put_nbrstr(item->carry_limit, ":carry ");
    my_put_nbrstr(item->cure, ":cure ");
    my_put_nbrstr(item->recorvery, ":hp+ ");
    my_put_nbrstr(item->type, ": type\n\n");
}

void check_inventory(t_char_inv *c)
{
    my_putstr("\nchar inventory\n\n");
    t_inventory *cursor = c->ch->inv;

    while (cursor){
        switch (cursor->type){
        case WEAPON:
            check_weapon(cursor->weapon);
            break;
        case ARMOR:
            check_armor(cursor->armor);
            break;
        case ITEM:
            check_utilities(cursor->item);
            break;
        }
        cursor = cursor->next;
    }
    free(cursor);
}

void check_item(t_char_inv *c)
{
    my_putstr("\nITEM in the game\n");
    for (int i = 0; i < NBARMOR; i++) check_armor(&c->item->armor[i]);
    for (int i = 0; i < NBWEAPON; i++) check_weapon(&c->item->weapon[i]);
    for (int i = 0; i < NBITEM; i++) check_utilities(&c->item->item[i]);
}