/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** event.c
*/
#include "include/proto.h"

void which_destroy_bis(source_t *dt)
{
    if (dt->page == 5)
        destroy_end_page(dt);
    else if (dt->page == 7 || dt->page == 8)
        destroy_credit(dt);
    else {
        if (dt->page == 6) {
            destroy_fight(dt);
            destroy_world(dt);
        } else if (dt->page == 9) {
            destroy_world(dt);
        }
    }
}

void which_destroy(source_t *dt)
{
    if (dt->page == 1)
        destroy_menu(dt);
    else if (dt->page == 2)
        destroy_world(dt);
    else {
        if (dt->page == 3)
            destroy_option(dt);
        else if (dt->page == 4) {
            destroy_option(dt);
            destroy_world(dt);
        } else
            which_destroy_bis(dt);
    }
}