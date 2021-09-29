/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** free.c
*/
#include "../../../include/proto.h"

void free_item(t_char_inv *c)
{
    for (int i = 0; i < NBWEAPON; i++){
        free(c->item->weapon[i].name);
        free(c->item->weapon[i].desc);
    }
    free(c->item->weapon);
    for (int i = 0; i < NBARMOR; i++){
        free(c->item->armor[i].name);
        free(c->item->armor[i].desc);
    }
    free(c->item->armor);
    for (int i = 0; i < NBITEM; i++){
        free(c->item->item[i].name);
        free(c->item->item[i].desc);
    }
    free(c->item->item);
    free(c->item);
    free(c->ch->name);
    free(c->ch->stuff);
    free(c->ch);
}

void free_one(t_char_inv *c)
{
    free(c->item->weapon);
    free(c->item);
    free(c->ch->stuff);
    free(c->ch);
}

void free_two(t_char_inv *c)
{
    free(c->item->armor);
    free(c->item->weapon);
    free(c->item);
    free(c->ch->stuff);
    free(c->ch);
}

void free_three(t_char_inv *c)
{
    for (int i = 0; i < NBWEAPON; i++){
        free(c->item->weapon[i].name);
        free(c->item->weapon[i].desc);
    }
    free(c->item->weapon);
    for (int i = 0; i < NBARMOR; i++){
        free(c->item->armor[i].name);
        free(c->item->armor[i].desc);
    }
    free(c->item->armor);
    for (int i = 0; i < NBITEM; i++){
        free(c->item->item[i].name);
        free(c->item->item[i].desc);
    }
    free(c->item->item);
    free(c->item);
    free(c->ch->stuff);
    free(c->ch);
}

void free_four(t_char_inv *c)
{
    free(c->item);
    free(c->ch->stuff);
    free(c->ch);
}