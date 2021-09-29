/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** destroy.c
*/
#include "../../../../include/proto.h"

void my_destroy(t_char_inv *c)
{
    if (c->ch->inv_spr) sfSprite_destroy(c->ch->inv_spr);
    if (c->ch->inv_tx) sfTexture_destroy(c->ch->inv_tx);
    for (int i = 0; i < NBWEAPON; i++){
        if (c->item->weapon[i].txt)
            sfTexture_destroy(c->item->weapon[i].txt);
        if (c->item->weapon[i].sprt)
            sfSprite_destroy(c->item->weapon[i].sprt);
    }
    for (int i = 0; i < NBARMOR; i++){
        if (c->item->armor[i].sprt)
            sfSprite_destroy(c->item->armor[i].sprt);
        if (c->item->armor[i].txt)
            sfTexture_destroy(c->item->armor[i].txt);
    }
    for (int i = 0; i < NBITEM; i++){
        if (c->item->item[i].txt)
            sfTexture_destroy(c->item->item[i].txt);
        if (c->item->item[i].sprt)
            sfSprite_destroy(c->item->item[i].sprt);
    }
}