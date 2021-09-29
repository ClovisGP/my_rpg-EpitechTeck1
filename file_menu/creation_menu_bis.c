/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** creation_menu.c
*/
#include "../include/proto.h"

int create_text_menu_bis_bis_bis(source_t *dt)
{
    dt->menu->exit->text = sfText_create();
    sfText_setFont(dt->menu->exit->text, dt->princ);
    sfText_setCharacterSize(dt->menu->exit->text, 60);
    sfText_setColor(dt->menu->exit->text, sfBlack);
    dt->menu->exit->pos.x = 1550;
    dt->menu->exit->pos.y = 150;
    sfText_setPosition(dt->menu->exit->text, dt->menu->exit->pos);
    sfText_setString(dt->menu->exit->text, "Exit");
    return (0);
}

int create_text_menu_bis_bis(source_t *dt)
{
    dt->menu->explain->text = sfText_create();
    sfText_setFont(dt->menu->explain->text, dt->princ);
    sfText_setCharacterSize(dt->menu->explain->text, 60);
    sfText_setColor(dt->menu->explain->text, sfBlack);
    dt->menu->explain->pos.x = 350;
    dt->menu->explain->pos.y = 750;
    sfText_setPosition(dt->menu->explain->text, dt->menu->explain->pos);
    sfText_setString(dt->menu->explain->text, "Explication");
    dt->menu->credit->text = sfText_create();
    sfText_setFont(dt->menu->credit->text, dt->princ);
    sfText_setCharacterSize(dt->menu->credit->text, 60);
    sfText_setColor(dt->menu->credit->text, sfBlack);
    dt->menu->credit->pos.x = 1500;
    dt->menu->credit->pos.y = 750;
    sfText_setPosition(dt->menu->credit->text, dt->menu->credit->pos);
    sfText_setString(dt->menu->credit->text, "Credits");
    return (create_text_menu_bis_bis_bis(dt));
}

int create_text_menu_bis(source_t *dt)
{
    dt->menu->option->text = sfText_create();
    sfText_setFont(dt->menu->option->text, dt->princ);
    sfText_setCharacterSize(dt->menu->option->text, 60);
    sfText_setColor(dt->menu->option->text, sfBlack);
    dt->menu->option->pos.x = 1500;
    dt->menu->option->pos.y = 450;
    sfText_setPosition(dt->menu->option->text, dt->menu->option->pos);
    sfText_setString(dt->menu->option->text, "Option");
    dt->menu->conti->text = sfText_create();
    sfText_setFont(dt->menu->conti->text, dt->princ);
    sfText_setCharacterSize(dt->menu->conti->text, 60);
    sfText_setColor(dt->menu->conti->text, sfBlack);
    dt->menu->conti->pos.x = 350;
    dt->menu->conti->pos.y = 450;
    sfText_setPosition(dt->menu->conti->text, dt->menu->conti->pos);
    sfText_setString(dt->menu->conti->text, "Continuer");
    return (create_text_menu_bis_bis(dt));
}

int create_text_menu(source_t *dt)
{
    dt->menu->play->text = sfText_create();
    sfText_setFont(dt->menu->play->text, dt->princ);
    sfText_setCharacterSize(dt->menu->play->text, 60);
    sfText_setColor(dt->menu->play->text, sfBlack);
    dt->menu->play->pos.x = 180;
    dt->menu->play->pos.y = 225;
    sfText_setPosition(dt->menu->play->text, dt->menu->play->pos);
    sfText_setString(dt->menu->play->text, "Homme");
    dt->menu->play_fem->text = sfText_create();
    sfText_setFont(dt->menu->play_fem->text, dt->princ);
    sfText_setCharacterSize(dt->menu->play_fem->text, 60);
    sfText_setColor(dt->menu->play_fem->text, sfBlack);
    dt->menu->play_fem->pos.x = 550;
    dt->menu->play_fem->pos.y = 225;
    sfText_setPosition(dt->menu->play_fem->text, dt->menu->play_fem->pos);
    sfText_setString(dt->menu->play_fem->text, "Femme");
    return (create_text_menu_bis(dt));
}