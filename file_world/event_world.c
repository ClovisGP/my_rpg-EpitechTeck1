/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** event_world.c
*/
#include "../include/proto.h"

int world_event_bis_bis(source_t *dt)
{
    if (sfKeyboard_isKeyPressed(dt->pause)) {
        sfMusic_setVolume(dt->wrd->ost, 0);
        if (create_media_option(dt) == 84) return (84);
        reset_to_zero_view(dt);
        dt->page = 4;
    }
    if (sfKeyboard_isKeyPressed(sfKeyW)) {
        reset_to_zero_view(dt);
        dt->page = 9;
    }
    return (0);
}

int world_event_bis(source_t *dt)
{
    if (sfKeyboard_isKeyPressed(dt->save) && dt->pers->mouv == 0) {
        if ((dt->pers->pos[0] == 1 && dt->pers->pos[1] == 1)) {
            save_write(dt);
            dt->wrd->flag_save = 1;
        }
    }
    if (sfKeyboard_isKeyPressed(dt->quit)) {
        reset_to_zero_view(dt);
        destroy_world(dt);
        if (create_media_menu(dt) == 84) return (84);
        dt->page = 1;
    }
    return (world_event_bis_bis(dt));
}

int world_event(source_t *dt)
{
    int norme = 0;

    if (sfKeyboard_isKeyPressed(dt->right) && dt->pers->mouv == 0)
        deplac_right(dt); 
    else if (sfKeyboard_isKeyPressed(dt->left) && dt->pers->mouv == 0)
        deplac_left(dt);
    norme++;
    if (sfKeyboard_isKeyPressed(dt->down) && dt->pers->mouv == 0)
        deplac_down(dt);
    else if (sfKeyboard_isKeyPressed(dt->up) && dt->pers->mouv == 0)
        deplac_up(dt);
    display_quest(dt);
    if (sfKeyboard_isKeyPressed(dt->inter) && dt->pers->mouv == 0)
        what_interac(dt);
    norme++;
    if (world_event_bis(dt) == 84) return (84);
    return (0);
}