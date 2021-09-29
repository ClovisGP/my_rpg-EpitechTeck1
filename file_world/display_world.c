/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** display_world.c
*/
#include "../include/proto.h"

void display_quest(source_t *dt)
{
    if (sfKeyboard_isKeyPressed(dt->quest))
        dt->wrd->quest_flag = 1;
    else
        dt->wrd->quest_flag = 0;
    if (sfKeyboard_isKeyPressed(dt->inven))
        dt->wrd->inv_flag = 1;
    else
        dt->wrd->inv_flag = 0;
}

void display_hud_bis(source_t *dt)
{
    if (dt->wrd->inv_flag == 1) {
        sfSprite_setPosition(dt->wrd->hud_inv->spr, dt->wrd->hud_inv->pos);
        sfRenderWindow_drawSprite(dt->wind, dt->wrd->hud_inv->spr, NULL);
        if (dt->wrd->inven[1] == 1) {
            dt->wrd->shovel->pos.x = dt->wrd->hud_inv->pos.x + 130;
            dt->wrd->shovel->pos.y = dt->wrd->hud_inv->pos.y + 70;
            sfSprite_setPosition(dt->wrd->shovel->spr, dt->wrd->shovel->pos);
            sfRenderWindow_drawSprite(dt->wind, dt->wrd->shovel->spr, NULL);
        }
        if (dt->wrd->inven[0] == 1) {
            dt->wrd->nain->pos.x = dt->wrd->hud_inv->pos.x + 19;
            dt->wrd->nain->pos.y = dt->wrd->hud_inv->pos.y + 70;
            sfSprite_setPosition(dt->wrd->nain->spr, dt->wrd->nain->pos);
            sfRenderWindow_drawSprite(dt->wind, dt->wrd->nain->spr, NULL);
        }
    }
    if (dt->wrd->flag_save == 1) {
        sfSprite_setTextureRect(dt->wrd->save->spr, dt->wrd->save->rect);
        sfRenderWindow_drawSprite(dt->wind, dt->wrd->save->spr, NULL);
    }
}

void display_hud(source_t *dt)
{
    if (dt->wrd->dial->is_dia == 1) {
        sfSprite_setPosition(dt->wrd->hud_dial->spr, dt->wrd->hud_dial->pos);
        sfRenderWindow_drawSprite(dt->wind, dt->wrd->hud_dial->spr, NULL);
        sfText_setPosition(dt->wrd->dialog->text, dt->wrd->dialog->pos);
        sfRenderWindow_drawText(dt->wind, dt->wrd->dialog->text, NULL);
    }
    if (dt->wrd->quest_flag == 1) {
        sfSprite_setPosition(dt->wrd->hud_quest->spr, \
        dt->wrd->hud_quest->pos);
        sfRenderWindow_drawSprite(dt->wind, dt->wrd->hud_quest->spr, NULL);
        sfText_setString(dt->wrd->pv->text, my_int_to_str(dt->pers->pv));
        sfText_setPosition(dt->wrd->pv->text, dt->wrd->pv->pos);
        sfRenderWindow_drawText(dt->wind, dt->wrd->pv->text, NULL);
        sfText_setString(dt->wrd->level->text, \
        my_int_to_str(dt->pers->level));
        sfText_setPosition(dt->wrd->level->text, dt->wrd->level->pos);
        sfRenderWindow_drawText(dt->wind, dt->wrd->level->text, NULL);
    }
    display_hud_bis(dt);
}

void display_map(source_t *dt)
{
    sfRenderWindow_clear(dt->wind, sfBlack);
    sfRenderWindow_drawSprite(dt->wind, dt->wrd->bg->spr, NULL);
    if (dt->wrd->inven[1] == 0) {
        sfSprite_setPosition(dt->wrd->shovel->spr, dt->wrd->shovel->pos);
        sfRenderWindow_drawSprite(dt->wind, dt->wrd->shovel->spr, NULL);
    }
    if (dt->wrd->inven[0] == 0) {
        sfSprite_setPosition(dt->wrd->nain->spr, dt->wrd->nain->pos);
        sfRenderWindow_drawSprite(dt->wind, dt->wrd->nain->spr, NULL);
    }
}

int display_world(source_t *dt)
{
    if (dt->page == 2) {
        sfMusic_setVolume(dt->wrd->ost, dt->sound_level);
        display_map(dt);
        sfSprite_setPosition(dt->pers->img->spr, dt->pers->img->pos);
        sfSprite_setTextureRect(dt->pers->img->spr, dt->pers->img->rect);
        sfRenderWindow_drawSprite(dt->wind, dt->pers->img->spr, NULL);
        display_hud(dt);
        sfRenderWindow_setView(dt->wind, dt->wrd->vi->view);
        if (choice_mouv(dt) == 84) return (84);
    }
    return (0);
}