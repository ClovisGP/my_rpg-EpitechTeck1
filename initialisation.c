/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** initialisation.c
*/
#include "include/proto.h"

int alloc_menu(source_t *dt)
{
    dt->menu = malloc(sizeof(menu_t));
    if (!dt->menu) return (84);
    dt->menu->bg = malloc(sizeof(sprite_t));
    if (!dt->menu->bg) return (84);
    dt->menu->play = malloc(sizeof(text_t));
    if (!dt->menu->play) return (84);
    dt->menu->play_fem = malloc(sizeof(text_t));
    if (!dt->menu->play_fem) return (84);
    dt->menu->exit = malloc(sizeof(text_t));
    if (!dt->menu->exit) return (84);
    dt->menu->option = malloc(sizeof(text_t));
    if (!dt->menu->option) return (84);
    dt->menu->conti = malloc(sizeof(text_t));
    if (!dt->menu->conti) return (84);
    dt->menu->explain = malloc(sizeof(text_t));
    if (!dt->menu->explain) return (84);
    dt->menu->credit = malloc(sizeof(text_t));
    if (!dt->menu->credit) return (84);
    return (0);
}

int alloc_option(source_t *dt)
{
    dt->option = malloc(sizeof(option_t));
    if (!dt->option) return (84);
    dt->option->bg = malloc(sizeof(sprite_t));
    if (!dt->option->bg) return (84);
    dt->option->sound = malloc(sizeof(text_t));
    if (!dt->option->sound) return (84);
    dt->option->conf_1 = malloc(sizeof(text_t));
    if (!dt->option->conf_1) return (84);
    dt->option->conf_2 = malloc(sizeof(text_t));
    if (!dt->option->conf_2) return (84);
    dt->option->conf_3 = malloc(sizeof(text_t));
    if (!dt->option->conf_3) return (84);
    dt->option->conf_explain = malloc(sizeof(text_t));
    if (!dt->option->conf_explain) return (84);
    return (0);
}

int alloc(source_t *dt)
{
    if (alloc_world(dt) == 84) return (84);
    if (alloc_menu(dt) == 84) return (84);
    dt->sound_level = 50;
    if (alloc_option(dt) == 84) return (84);
    if (alloc_end(dt) == 84) return (84);
    dt->option->conf = 1;
    if (alloc_credit(dt) == 84) return (84);
    if (alloc_fight(dt) == 84) return (841);
    dt->up = sfKeyUp;
    if (alloc_inv(dt) == 84) return (84);
    dt->down = sfKeyDown;
    dt->left = sfKeyLeft;
    dt->right = sfKeyRight;
    dt->inter = sfKeyP;
    dt->quest = sfKeyO;
    dt->inven = sfKeyI;
    dt->save = sfKeyS;
    dt->quit = sfKeyQ;
    dt->pause = sfKeyM;
    dt->inv = sfKeyTab;
    return (0);
}

int init(source_t *dt)
{
    sfVideoMode mode = {1920, 1080, 32};

    if (alloc(dt) == 84) return (84);
    dt->wind = sfRenderWindow_create(mode, "CAAT", sfFullscreen \
    | sfClose, NULL);
    if (!dt->wind) return (84);
    dt->princ = sfFont_createFromFile("resc/moontells.ttf");
    if (!dt->princ) return (84);
    dt->page = 1;
    if (open_file(dt) == 84) return (84);
    if (take_dialogue(dt) == 84) return (84);
    dt->wrd->dial->is_dia = 0;
    return (0);
}

void destroy_end(source_t *dt)
{
    my_destroy(&dt->c);
    free_item(&dt->c);
    sfFont_destroy(dt->princ);
    sfRenderWindow_destroy(dt->wind);
}