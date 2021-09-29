/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** creation_option.c
*/
#include "../include/proto.h"

int create_text_option_bis_bis(source_t *dt)
{
    dt->option->conf_explain->text = sfText_create();
    sfText_setFont(dt->option->conf_explain->text, dt->princ);
    sfText_setCharacterSize(dt->option->conf_explain->text, 20);
    sfText_setColor(dt->option->conf_explain->text, sfBlack);
    dt->option->conf_explain->pos.x = 750;
    dt->option->conf_explain->pos.y = 800;
    sfText_setPosition(dt->option->conf_explain->text, \
    dt->option->conf_explain->pos);
    sfText_setString(dt->option->conf_explain->text, "UP : 'Arrow UP'\
    Down: 'Arrow DOWN'\nLeft: 'Arrow LEFT'    Right: 'Arrow RIGHT'\
    \nInterraction: 'p'    Display quest : 'o'\nDisplay quest inventory: 'i'");
    return (0);
}

int create_text_option_bis(source_t *dt)
{
    dt->option->conf_2->text = sfText_create();
    sfText_setFont(dt->option->conf_2->text, dt->princ);
    sfText_setCharacterSize(dt->option->conf_2->text, 40);
    sfText_setColor(dt->option->conf_2->text, sfBlack);
    dt->option->conf_2->pos.x = 990;
    dt->option->conf_2->pos.y = 640;
    sfText_setPosition(dt->option->conf_2->text, dt->option->conf_2->pos);
    sfText_setString(dt->option->conf_2->text, "TWO");
    dt->option->conf_3->text = sfText_create();
    sfText_setFont(dt->option->conf_3->text, dt->princ);
    sfText_setCharacterSize(dt->option->conf_3->text, 40);
    sfText_setColor(dt->option->conf_3->text, sfBlack);
    dt->option->conf_3->pos.x = 1220;
    dt->option->conf_3->pos.y = 640;
    sfText_setPosition(dt->option->conf_3->text, dt->option->conf_3->pos);
    sfText_setString(dt->option->conf_3->text, "THIRD");
    return (create_text_option_bis_bis(dt));
}

int create_text_option(source_t *dt)
{
    dt->option->sound->text = sfText_create();
    sfText_setFont(dt->option->sound->text, dt->princ);
    sfText_setCharacterSize(dt->option->sound->text, 60);
    sfText_setColor(dt->option->sound->text, sfBlack);
    dt->option->sound->pos.x = 920;
    dt->option->sound->pos.y = 418;
    sfText_setPosition(dt->option->sound->text, dt->option->sound->pos);
    sfText_setString(dt->option->sound->text, my_int_to_str(dt->sound_level));
    dt->option->conf_1->text = sfText_create();
    sfText_setFont(dt->option->conf_1->text, dt->princ);
    sfText_setCharacterSize(dt->option->conf_1->text, 40);
    sfText_setColor(dt->option->conf_1->text, sfBlack);
    dt->option->conf_1->pos.x = 750;
    dt->option->conf_1->pos.y = 640;
    sfText_setPosition(dt->option->conf_1->text, dt->option->conf_1->pos);
    sfText_setString(dt->option->conf_1->text, "ONE");
    return (create_text_option_bis(dt));
}

int create_sprite_option(source_t *dt)
{
    dt->option->bg->tex = sfTexture_createFromFile("resc/bg/option.jpg", NULL);
    if (!dt->option->bg->tex)
        return (84);
    dt->option->bg->spr = sfSprite_create();
    sfSprite_setTexture(dt->option->bg->spr, dt->option->bg->tex, sfTrue);
}

int create_media_option(source_t *dt)
{
    if (create_sprite_option(dt) == 84) return (84);
    if (create_text_option(dt) == 84) return (84);
    dt->option->ost = sfMusic_createFromFile("resc/music_menu.ogg");
    if (!dt->option->ost) return (84);
    sfMusic_setLoop(dt->option->ost, 1);
    sfMusic_play(dt->option->ost);
    sfMusic_setVolume(dt->option->ost, 50);
    return (0);
}