/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** initialisation_bis.c
*/
#include "include/proto.h"

int alloc_fight(source_t *dt)
{
    dt->amau = malloc(sizeof(amau_t));
    if (!dt->amau) return (84);
    dt->amau->mob = malloc(sizeof(mob_t));
    if (!dt->amau->mob) return (84);
    dt->amau->ft = malloc(sizeof(fight_t));
    if (!dt->amau->ft) return (84);
    dt->amau->her = malloc(sizeof(hero_t));
    if (!dt->amau->her) return (84);
    return (0);
}

int alloc_inv(source_t *dt)
{
    if (!inventory(&dt->c)){
        write(2, "Error: malloc inventory.\n", 25);
        return (84);
    }
    return (0);
}