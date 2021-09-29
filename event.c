/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** event.c
*/
#include "include/proto.h"

int event_page_bis_bis_bis(source_t *dt)
{
    if (dt->page == 6) {
        if (fight_event(dt) == 84)
            return (84);
    }
    return (0);
}

int event_page_bis_bis(source_t *dt)
{
    if (dt->page == 5) {
        if (end_event(dt) == 84)
            return (84);
    } else if (dt->page == 7 || dt->page == 8) {
        if (credit_event(dt) == 84)
            return (84);
    } else {
        if (event_page_bis_bis_bis(dt) == 84)
            return (84);
    }
    return (0);
}

int event_page_bis(source_t *dt)
{
    if (dt->page == 3) {
        if (option_event(dt) == 84)
            return (84);
    } else if (dt->page == 4) {
        if (option_event_four(dt) == 84)
            return (84);
    } else {
        if (event_page_bis_bis(dt) == 84)
            return (84);
    }
    return (0);
}

int event_page(source_t *dt)
{
    inv_event(dt);
    if (dt->page == 1) {
        if (event_menu(dt) == 84)
            return (84);
    } else if (dt->page == 2) {
        if (world_event(dt) == 84)
            return (84);
    } else {
        if (event_page_bis(dt) == 84)
            return (84);
    }
    return (0);
}

int test_event(source_t *dt)
{
    while (sfRenderWindow_pollEvent(dt->wind, &dt->event)) {
        if (dt->event.type == sfEvtClosed || \
        sfKeyboard_isKeyPressed(sfKeyEscape)) {
            which_destroy(dt);
            dt->page = 0;
            sfRenderWindow_close(dt->wind);
        }
        if (event_page(dt) == 84) return (84);
    }
    return (0);
}