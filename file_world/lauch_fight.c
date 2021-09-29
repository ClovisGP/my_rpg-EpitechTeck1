/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** lauch.c
*/
#include "../include/proto.h"

int boss_or_not(source_t *dt)
{
    if (dt->wrd->is_boss == 1 && dt->pers->pos[1] == 2 \
    && dt->pers->pos[0] == 36) {
        dt->wrd->nbr_mob = 0;
        dt->wrd->name_mob = my_strcpy("boss");
        dt->wrd->is_boss = 0;
        dt->wrd->percen_fight = 10;
        reset_to_zero_view(dt);
        sfMusic_setVolume(dt->wrd->ost, 0);
        if (creation_media_fight(dt, dt->wrd->nbr_mob) == 84) return (84);
        dt->page = 6;
        return (1);
    } else {
        dt->wrd->nbr_mob = 1;
        dt->wrd->name_mob = my_strcpy("slime");
    }
    return (0);
}

int lauch_fight(source_t *dt)
{
    int choice;
    time_t ti;
    int ret = 0;

    if (dt->is_combat == 1) return (1);
    if (dt->pers->pos[0] <= 13 && dt->pers->pos[1] <= 17) return (1);
    srand((unsigned) time(&ti));
    choice = rand() % dt->wrd->percen_fight;
    ret = boss_or_not(dt);
    if (ret == 84) return (84);
    else if (ret == 1) return (0);
    if (choice == 0) {
        dt->wrd->percen_fight = 15;
        reset_to_zero_view(dt);
        sfMusic_setVolume(dt->wrd->ost, 0);
        if (creation_media_fight(dt, dt->wrd->nbr_mob) == 84) return (84);
        dt->page = 6;
    } else {
        if (dt->wrd->percen_fight >= 2)
            dt->wrd->percen_fight = dt->wrd->percen_fight - 1;
    }
}