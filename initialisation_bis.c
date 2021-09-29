/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** initialisation_bis.c
*/
#include "include/proto.h"

int alloc_pers(source_t *dt)
{
    dt->pers = malloc(sizeof(perso_t));
    if (!dt->pers) return (84);
    dt->pers->img = malloc(sizeof(sprite_t));
    if (!dt->pers->img) return (84);
    dt->pers->obj = malloc(sizeof(item_t));
    if (!dt->pers->obj) return (84);
    dt->pers->obj->img = malloc(sizeof(sprite_t));
    if (!dt->pers->obj->img) return (84);
    return (0);
}

int alloc_world_bis(source_t *dt)
{
    dt->wrd->shovel = malloc(sizeof(sprite_t));
    if (!dt->wrd->shovel) return (84);
    dt->wrd->nain = malloc(sizeof(sprite_t));
    if (!dt->wrd->nain) return (84);
    dt->wrd->hud_inv = malloc(sizeof(sprite_t));
    if (!dt->wrd->hud_inv) return (84);
    dt->wrd->save = malloc(sizeof(sprite_t));
    if (!dt->wrd->save) return (84);
    return (alloc_pers(dt));
}

int alloc_world(source_t *dt)
{
    dt->wrd = malloc(sizeof(world_t));
    if (!dt->wrd) return (84);
    dt->wrd->bg = malloc(sizeof(sprite_t));
    if (!dt->wrd->bg) return (84);
    dt->wrd->dialog = malloc(sizeof(text_t));
    if (!dt->wrd->dialog) return (84);
    dt->wrd->hud_dial = malloc(sizeof(sprite_t));
    if (!dt->wrd->hud_dial) return (84);
    dt->wrd->vi = malloc(sizeof(view_t));
    if (!dt->wrd->vi) return (84);
    dt->wrd->dial = malloc(sizeof(dial_t));
    if (!dt->wrd->dial) return (84);
    dt->wrd->level = malloc(sizeof(text_t));
    if (!dt->wrd->level) return (84);
    dt->wrd->pv = malloc(sizeof(text_t));
    if (!dt->wrd->pv) return (84);
    dt->wrd->hud_quest = malloc(sizeof(sprite_t));
    if (!dt->wrd->hud_quest) return (84);
    return (alloc_world_bis(dt));
}

int alloc_end(source_t *dt)
{
    dt->end = malloc(sizeof(end_t));
    if (!dt->end) return (84);
    dt->end->bg = malloc(sizeof(sprite_t));
    if (!dt->end->bg) return (84);
    dt->end->retour = malloc(sizeof(text_t));
    if (!dt->end->retour) return (84);
    return (0);
}

int alloc_credit(source_t *dt)
{
    dt->credit = malloc(sizeof(credit_t));
    if (!dt->credit) return (84);
    dt->credit->bg = malloc(sizeof(sprite_t));
    if (!dt->credit->bg) return (84);
    return (0);
}