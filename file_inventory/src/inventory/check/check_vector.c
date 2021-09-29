/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** check_vector.c
*/
#include "../../../../include/proto.h"

void check_background_vector(t_char_inv *c)
{
    float y = c->ch->binv_vector.y;
    float x = c->ch->binv_vector.y;
    my_printf("Background\tvector\tx:%f\ty:%f\n", x, y);
    return;
}

void check_vector(t_char_inv *c)
{
    check_background_vector(c);
    for (int i = 0; i < NBWEAPON; i++){
        float y = c->item->weapon[i].vector.y;
        float x = c->item->weapon[i].vector.x;
        my_printf("weapon\t\tvector\tx:%f\ty:%f\n", x, y);
    }
    for (int i = 0; i < NBARMOR; i++){
        float y = c->item->armor[i].vector.y;
        float x = c->item->armor[i].vector.x;
        my_printf("Armor\t\tvector\tx:%f\ty:%f\n", x, y);
    }
    for (int i = 0; i < NBITEM; i++){
        float y = c->item->item[i].vector.y;
        float x = c->item->item[i].vector.x;
        my_printf("item\t\tvector\tx:%f\ty:%f\n", x, y);
    }
    return;
}