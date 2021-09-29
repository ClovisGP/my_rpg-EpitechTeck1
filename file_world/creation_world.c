/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** creation_world.c
*/
#include "../include/proto.h"

int creation_perso_sprite(source_t *dt)
{
    if (dt->pers->is_man == 0) {
        dt->pers->img->tex = sfTexture_createFromFile\
        ("resc/perso/perso.png", NULL);
    } else {
        dt->pers->img->tex = sfTexture_createFromFile\
        ("resc/perso/perso_fem.png", NULL);
    }
    if (!dt->pers->img->tex) return (84);
    dt->pers->img->spr = sfSprite_create();
    sfSprite_setTexture(dt->pers->img->spr, dt->pers->img->tex, \
    sfTrue);
    return (0);
}

int creation_perso(source_t *dt)
{
    if (creation_perso_sprite(dt) == 84) return (0);
    dt->pers->img->pos.x = 100;
    dt->pers->img->pos.y = 100;
    dt->pers->pos[0] = 1;
    dt->pers->pos[1] = 1;
    dt->pers->mouv = 0;
    dt->pers->img->rect.top = 0;
    dt->pers->img->rect.left = 0;
    dt->pers->img->rect.width = 100;
    dt->pers->img->rect.height = 100;
    dt->pers->pv = 10;
    dt->pers->level = 1;
    return (0);
}

int create_text_world_bis(source_t *dt)
{
    dt->wrd->pv->text = sfText_create();
    sfText_setFont(dt->wrd->pv->text, dt->princ);
    sfText_setCharacterSize(dt->wrd->pv->text, 50);
    sfText_setColor(dt->wrd->pv->text, sfBlack);
    dt->wrd->pv->pos.x = -670;
    dt->wrd->pv->pos.y = -210;
    sfText_setPosition(dt->wrd->pv->text, dt->wrd->pv->pos);
    sfText_setString(dt->wrd->pv->text, "10");
    dt->wrd->level->text = sfText_create();
    sfText_setFont(dt->wrd->level->text, dt->princ);
    sfText_setCharacterSize(dt->wrd->level->text, 50);
    sfText_setColor(dt->wrd->level->text, sfBlack);
    dt->wrd->level->pos.x = -620;
    dt->wrd->level->pos.y = -310;
    sfText_setPosition(dt->wrd->level->text, dt->wrd->level->pos);
    sfText_setString(dt->wrd->level->text, "1");
    return (0);
}

int create_text_world(source_t *dt)
{
    dt->wrd->dialog->text = sfText_create();
    sfText_setFont(dt->wrd->dialog->text, dt->princ);
    sfText_setCharacterSize(dt->wrd->dialog->text, 20);
    sfText_setColor(dt->wrd->dialog->text, sfBlack);
    dt->wrd->dialog->pos.x = 620;
    dt->wrd->dialog->pos.y = 480;
    sfText_setPosition(dt->wrd->dialog->text, dt->wrd->dialog->pos);
    sfText_setString(dt->wrd->dialog->text, "C'est un dialogue");
    return (create_text_world_bis(dt));
}

int create_media_world(source_t *dt)
{
    if (create_sprite_world(dt) == 84) return (84);
    if (create_text_world(dt) == 84) return (84);
    if (create_music_world(dt) == 84) return (84);
    dt->wrd->vi->r_view.left = -850;
    dt->wrd->vi->r_view.top = -340;
    dt->wrd->vi->r_view.height = 1080;
    dt->wrd->vi->r_view.width = 1920;
    dt->wrd->vi->view = sfView_createFromRect(dt->wrd->vi->r_view);
    dt->wrd->inven[0] = 0;
    dt->wrd->inven[1] = 0;
    dt->wrd->quest_rec[0] = 0;
    dt->wrd->quest_rec[1] = 0;
    dt->wrd->quest_rec[2] = 0;
    dt->wrd->inv_flag = 0;
    dt->wrd->flag_save = 0;
    dt->wrd->percen_fight = 15;
    dt->wrd->is_boss = 1;
    dt->wrd->name_mob = my_strcpy("slime");
    dt->map = my_boardcpy(dt->map_vierge);
    put_item(dt);
    return (0);
}