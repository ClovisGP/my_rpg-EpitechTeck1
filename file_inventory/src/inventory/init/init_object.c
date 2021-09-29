/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** init_object.c
*/
#include "../../../../include/proto.h"

bool init_weap(t_game_item *item)
{
    for (int i = 0; i < NBWEAPON;){
        weapon_init_stat(&item->weapon[i], 1, 10, SWORD);
        if (!weapon_sprite_texture(&item->weapon[i], SWORD_PATH)) return (0);
        if (!weapon_init_desc(&item->weapon[i], TRGSW, TRGSWD, i)) return (0);
        i++;
        weapon_init_stat(&item->weapon[i], 1, 20, STAFF);
        if (!weapon_sprite_texture(&item->weapon[i], STAFF_PATH)) return (0);
        if (!weapon_init_desc(&item->weapon[i], TRGST, TRGSTD, i)) return (0);
        i++;
        weapon_init_stat(&item->weapon[i], 1, 10, BOW);
        if (!weapon_sprite_texture(&item->weapon[i], BOW_PATH)) return (0);
        if (!weapon_init_desc(&item->weapon[i], TRGB, TRGBD, i)) return (0);
        i++;
    }
    return (1);
}

bool init_arm(t_game_item *item)
{
    for (int i = 0; i < NBARMOR;){
        armor_init_stat(&item->armor[i], 1, 10, WARRIOR);
        if (!armor_sprite_texture(&item->armor[i], WARMOG_PATH)) return (0);
        if (!armor_init_desc(&item->armor[i], WARMOG, WARMOGD, i)) return (0);
        i++;
        armor_init_stat(&item->armor[i], 1, 20, MAGE);
        armor_sprite_texture(&item->armor[i], ZHONYA_PATH);
        if (!armor_init_desc(&item->armor[i], ZNYA, ZNYAD, i)) return (0);
        i++;
        armor_init_stat(&item->armor[i], 1, 10, ELF);
        if (!armor_sprite_texture(&item->armor[i], GUARDIAN_PATH)) return (0);
        if (!armor_init_desc(&item->armor[i], GRDN, GRDND, i)) return (0);
        i++;
    }
    return (1);
}

bool init_atm(t_game_item *item)
{
    for (int i = 0; i < NBITEM;){
        item_init_stat(&item->item[i], 1, BOMBE);
        if (!item_sprite_texture(&item->item[i], BOMB_PATH)) return (0);
        if (!item_init_desc(&item->item[i], MEGUMI, MEGUBOUM, i)) return (0);
        i++;
        item_init_stat(&item->item[i], 1, POTION);
        if (!item_sprite_texture(&item->item[i], HPOPO_PATH)) return (0);
        if (!item_init_desc(&item->item[i], POPO, POPOD, i)) return (0);
        i++;
        item_init_stat(&item->item[i], 1, ANTIDOTE);
        if (!item_sprite_texture(&item->item[i], CURE_PATH)) return (0);
        if (!item_init_desc(&item->item[i], POPOCURE, POPOCURED, i)) return (0);
        i++;
    }
    return (1);
}