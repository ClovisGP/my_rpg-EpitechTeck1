/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** fight.c
*/
#include "fight.h"

int creation_music_fight(source_t *dt)
{
    dt->amau->ost = sfMusic_createFromFile("resc/combat.ogg");
    if (!dt->amau->ost) return (84);
    sfMusic_setLoop(dt->amau->ost, 1);
    sfMusic_play(dt->amau->ost);
    sfMusic_setVolume(dt->amau->ost, dt->sound_level);
}

int creation_media_fight(source_t *dt, int choice)
{
    if (load_ress(dt) == 84) return (84);
    if (creation_music_fight(dt) == 84) return (84);
    dt->amau->ft->hero_pm = 100;
    dt->amau->ft->hero_pv = dt->pers->pv;
    dt->amau->battle_pos[0] = 550;
    dt->amau->battle_pos[1] = 500;
    if (choice == 0) {
        dt->amau->ft->mob = load_sprite("resc/dragon.png");
        if (!dt->amau->ft->mob) return (84);
    } else {
        dt->amau->ft->mob = load_sprite("resc/slime.png");
        if (!dt->amau->ft->mob) return (84);
    }
    return (0);
}

int destroy_fight(source_t *dt)
{
    sfMusic_destroy(dt->amau->ost);
    sfSprite_destroy(dt->amau->ft->antid_spr);
    sfSprite_destroy(dt->amau->ft->hltpo_spr);
    sfSprite_destroy(dt->amau->ft->batlfld_spr);
    sfSprite_destroy(dt->amau->ft->bomb_spr);
    sfSprite_destroy(dt->amau->ft->hero);
    sfSprite_destroy(dt->amau->ft->mob);
    sfSprite_destroy(dt->amau->escape_spr);
    sfText_destroy(dt->amau->ft->pv);
    sfText_destroy(dt->amau->ft->pm);
}

int fight_event_clic(source_t *dt)
{
    int norme = 0;

    if ((0 <= dt->pos_ms.x && 300 >= dt->pos_ms.x) && \
    (0 <= dt->pos_ms.y && 150 >= dt->pos_ms.y)) {
        destroy_fight(dt);
        replace_view(dt);
        dt->page = 2;
    }
    return (0);
}

int fight_event(source_t *dt)
{
    if (dt->event.type == sfEvtMouseButtonPressed)
        return (fight_event_clic(dt));
}