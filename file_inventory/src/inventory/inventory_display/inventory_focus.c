/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** inventory_focus.c
*/
#include "../../../../include/proto.h"

void calc(int a, int b, sfVector2f *tmp)
{
    switch (a){
    case ARMOR:
        tmp->x += 100 * b;
        tmp->y += 100;
        break;
    case WEAPON:
        tmp->x += 100 * b;
        tmp->y += 400;
        break;
    case ITEM:
        tmp->x += 100 * b;
        tmp->y += 700;
        break;
    }
    return;
}

sfVector2f set_item(t_char_inv *c, int item, sfVector2f *v, sfVector2f tmp)
{
    int x = 0;
    switch (item){
    case 1: case 2: case 3:
        calc(WEAPON, item, &tmp);
        break;
    case 4: case 5: case 6:
        if (item == 4) x = 1;
        if (item == 5) x = 2;
        if (item == 6) x = 3;
        calc(ARMOR, x, &tmp);
        break;
    case 7: case 8: case 9:
        if (item == 7) x = 1;
        if (item == 9) x = 3;
        if (item == 8) x = 2;
        calc(ITEM, x, &tmp);
        break;
    }
    return (tmp);
}

void item_positionnning(t_char_inv *c)
{
    for (int i = 0; i < NBWEAPON; i++){
        sfVector2f tmp = sfSprite_getPosition(c->ch->inv_spr);
        tmp = set_item(c, i + 1, &c->item->weapon[i].vector, tmp);
        sfSprite_setPosition(c->item->weapon[i].sprt, tmp);
    }
    for (int i = 0; i < NBARMOR; i++){
        sfVector2f tmp = sfSprite_getPosition(c->ch->inv_spr);
        tmp = set_item(c, i + 4, &c->item->armor[i].vector, tmp);
        sfSprite_setPosition(c->item->armor[i].sprt, tmp);
    }
    for (int i = 0; i < NBITEM; i++){
        sfVector2f tmp = sfSprite_getPosition(c->ch->inv_spr);
        tmp = set_item(c, i + 7, &c->item->item[i].vector, tmp);
        sfSprite_setPosition(c->item->item[i].sprt, tmp);
    }
    return;
}

void inventory_setposotion(t_char_inv *c)
{
    c->ch->binv_vector.x = 0;
    c->ch->binv_vector.y = 0;
    sfSprite_setPosition(c->ch->inv_spr, c->ch->binv_vector);
    item_positionnning(c);
}