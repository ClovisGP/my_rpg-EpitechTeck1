/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** fight.c
*/
#include "fight.h"

void init_battlefield(source_t *src, fight_t *ft, int *battle_pos)
{
    sprite_setscale(ft->hero, 2, 2);
    sprite_setpos(ft->batlfld_spr, battle_pos[0], battle_pos[1]);
    sprite_setpos(ft->antid_spr, battle_pos[0] + 430, battle_pos[1] + 75);
    sprite_setpos(ft->hltpo_spr, battle_pos[0] + 430, battle_pos[1] + 140);
    sprite_setpos(ft->bomb_spr, battle_pos[0] + 431, battle_pos[1] + 210);
    sprite_setpos(ft->hero, battle_pos[0] + 555, battle_pos[1] + 70);
    sprite_setpos(ft->mob, battle_pos[0] + 150, battle_pos[1] - 500);
    sfRenderWindow_drawSprite(src->wind, ft->batlfld_spr, NULL);
    sfRenderWindow_drawSprite(src->wind, ft->antid_spr, NULL);
    sfRenderWindow_drawSprite(src->wind, ft->hltpo_spr, NULL);
    sfRenderWindow_drawSprite(src->wind, ft->bomb_spr, NULL);
    sfRenderWindow_drawSprite(src->wind, ft->hero, NULL);
    sfRenderWindow_drawSprite(src->wind, src->amau->escape_spr, NULL);
    sfRenderWindow_drawSprite(src->wind, ft->mob, NULL);
}

void disp_hero_stats(source_t *src, fight_t *ft, int *battle_pos)
{
    sfText_setString(ft->pv, int_to_char(ft->hero_pv));
    sfText_setString(ft->pm, int_to_char(ft->hero_pm));
    text_setscale(ft->pv, 1.2, 1.2);
    text_setscale(ft->pm, 1.2, 1.2);
    text_setpos(ft->pv, battle_pos[0] + 700, battle_pos[1] + 350);
    text_setpos(ft->pm, battle_pos[0] + 700, battle_pos[1] + 390);
    sfRenderWindow_drawText(src->wind, ft->pv, NULL);
    sfRenderWindow_drawText(src->wind, ft->pm, NULL);
}

int hero_turn(source_t *src, fight_t *ft, int *battle_pos)
{
    int selection;

    init_battlefield(src, ft, battle_pos);
    disp_hero_stats(src, ft, battle_pos);
    if (ft->hero_pv < 1) return (1);
    if (ft->mob_pv < 1) return (2);
    else return (8);
}

int enemy_turn(source_t *src, fight_t *ft, int *battle_pos)
{
    init_battlefield(src, ft, battle_pos);
    disp_hero_stats(src, ft, battle_pos);
    if (ft->hero_pv < 1) return (1);
    if (ft->mob_pv < 1) return (2);
    else return (8);
}

int fight(source_t *src, char *mob_name)
{
    if (src->page == 6) {
        sfRenderWindow_clear(src->wind, sfBlack);
        src->amau->result = hero_turn\
        (src, src->amau->ft, src->amau->battle_pos);
        if (src->amau->result == 1) return (1);
        if (src->amau->result == 2) return (2);
        if (src->amau->result == 0) return (0);
        src->amau->result = enemy_turn\
        (src, src->amau->ft, src->amau->battle_pos);
        if (src->amau->result == 1) return (1);
        if (src->amau->result == 2) return (2);
        if (src->amau->result == 0) return (0);
    }
    return (src->amau->result);
}