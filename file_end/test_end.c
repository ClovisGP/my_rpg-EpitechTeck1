/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** creation_end.c
*/
#include "../include/proto.h"

int test_end_bis(source_t *dt)
{
    if (dt->pers->pv <= 0) {
        reset_to_zero_view(dt);
        destroy_world(dt);
        dt->page = 5;
        if (creation_media_end(dt) == 84)
            return (84);
    }
    if ((dt->wrd->quest_rec[2] == 2 || dt->wrd->quest_rec[2] == 3) && \
    dt->wrd->dial->is_dia == 0) {
        reset_to_zero_view(dt);
        destroy_world(dt);
        dt->page = 5;
        if (creation_media_end(dt) == 84)
            return (84);
    }
    return (0);
}

int test_end(source_t *dt)
{
    if (dt->page == 2) {
        if (test_end_bis(dt) == 84)
            return (84);
    }
    return (0);
}