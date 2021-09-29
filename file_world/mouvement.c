/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** mouvement.c
*/
#include "../include/proto.h"

int mouv_right(source_t *dt)
{
    if (dt->pers->img->pos.x < dt->pers->end_depl) {
        dt->pers->time_depl = sfClock_getElapsedTime\
        (dt->pers->clo_depl);
        dt->pers->unit_depl = sfTime_asMilliseconds\
        (dt->pers->time_depl);
        if (dt->pers->unit_depl < 250)
            mouv_hud_right(dt);
    }
    if (dt->pers->img->pos.x == dt->pers->end_depl) {
        sfClock_destroy(dt->pers->clo_depl);
        dt->pers->pos[0] = dt->pers->pos[0] + 1;
        dt->pers->mouv = 0;
        if (lauch_fight(dt) == 84) return (84);
    }
    return (0);
}

int mouv_left(source_t *dt)
{
    if (dt->pers->img->pos.x > dt->pers->end_depl) {
        dt->pers->time_depl = sfClock_getElapsedTime\
        (dt->pers->clo_depl);
        dt->pers->unit_depl = sfTime_asMilliseconds\
        (dt->pers->time_depl);
        if (dt->pers->unit_depl < 250)
            mouv_hud_left(dt);
    }
    if (dt->pers->img->pos.x == dt->pers->end_depl) {
        sfClock_destroy(dt->pers->clo_depl);
        dt->pers->pos[0] = dt->pers->pos[0] - 1;
        dt->pers->mouv = 0;
        if (lauch_fight(dt) == 84) return (84);
    }
    return (0);
}

int mouv_down(source_t *dt)
{
    if (dt->pers->img->pos.y < dt->pers->end_depl) {
        dt->pers->time_depl = sfClock_getElapsedTime\
        (dt->pers->clo_depl);
        dt->pers->unit_depl = sfTime_asMilliseconds\
        (dt->pers->time_depl);
        if (dt->pers->unit_depl < 250)
            mouv_hud_down(dt);
    }
    if (dt->pers->img->pos.y == dt->pers->end_depl) {
        sfClock_destroy(dt->pers->clo_depl);
        dt->pers->pos[1] = dt->pers->pos[1] + 1;
        dt->pers->mouv = 0;
        lauch_fight(dt);
        if (lauch_fight(dt) == 84) return (84);
    }
    return (0);
}

int mouv_up(source_t *dt)
{
    if (dt->pers->img->pos.y > dt->pers->end_depl) {
        dt->pers->time_depl = sfClock_getElapsedTime\
        (dt->pers->clo_depl);
        dt->pers->unit_depl = sfTime_asMilliseconds\
        (dt->pers->time_depl);
        if (dt->pers->unit_depl < 250)
            mouv_hud_up(dt);
    }
    if (dt->pers->img->pos.y == dt->pers->end_depl) {
        sfClock_destroy(dt->pers->clo_depl);
        dt->pers->pos[1] = dt->pers->pos[1] - 1;
        dt->pers->mouv = 0;
        if (lauch_fight(dt) == 84) return (84);
    }
    return (0);
}

int choice_mouv(source_t *dt)
{
    if (dt->pers->mouv == 1) {
        if (mouv_right(dt) == 84)
            return (84);
    } else if (dt->pers->mouv == 2) {
        if (mouv_left(dt) == 84)
            return (84);
    }
    if (dt->pers->mouv == 3) {
        if (mouv_down(dt) == 84)
            return (84);
    } else if (dt->pers->mouv == 4) {
        if (mouv_up(dt) == 84)
            return (84);
    }
    return (0);
}