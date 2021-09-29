/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** configuration.c
*/
#include "../include/proto.h"

void conf_one(source_t *dt)
{
    sfText_setColor(dt->option->conf_1->text, sfRed);
    dt->up = sfKeyUp;
    dt->down = sfKeyDown;
    dt->left = sfKeyLeft;
    dt->right = sfKeyRight;
    dt->inter = sfKeyP;
    dt->quest = sfKeyO;
    dt->inven = sfKeyI;
    dt->save = sfKeyS;
    dt->quit = sfKeyQ;
    dt->pause = sfKeyM;
    sfText_setString(dt->option->conf_explain->text, "UP : 'Arrow UP'\
    Down: 'Arrow DOWN'\nLeft: 'Arrow LEFT'    Right: 'Arrow RIGHT'\
    \nInterraction: 'p'    Display quest : 'o'\nDisplay Quest Inventory: 'i'\
    Leave Page 'q'\nSave : 'S'    Pause : 'm'");
}

void conf_two(source_t *dt)
{
    sfText_setColor(dt->option->conf_2->text, sfRed);
    dt->up = sfKeyZ;
    dt->down = sfKeyS;
    dt->left = sfKeyQ;
    dt->right = sfKeyD;
    dt->inter = sfKeyT;
    dt->quest = sfKeyA;
    dt->inven = sfKeyI;
    dt->save = sfKeyO;
    dt->quit = sfKeyL;
    dt->pause = sfKeyM;
    sfText_setString(dt->option->conf_explain->text, "UP : 'z'\
    Down: 's'\nLeft: 'q'    Right: 'd'\nInterraction: 't'\
    Display quest : 'a'\nDisplay inventaire for quest: 'i'\
    Leave Page 'l'\nSave : 'o'    Pause : 'm'");
}

void conf_third(source_t *dt)
{
    sfText_setColor(dt->option->conf_3->text, sfRed);
    dt->up = sfKeyW;
    dt->down = sfKeyS;
    dt->left = sfKeyA;
    dt->right = sfKeyD;
    dt->inter = sfKeyT;
    dt->quest = sfKeyQ;
    dt->inven = sfKeyI;
    dt->save = sfKeyO;
    dt->quit = sfKeyL;
    dt->pause = sfKeyM;
    sfText_setString(dt->option->conf_explain->text, "UP : 'w'\
    Down: 's'\nLeft: 'a'    Right: 'd'\nInterraction: 't'\
    Display quest : 'q'\nDisplay inventaire for quest: 'i'\
    Leave Page 'l'\nSave : 'o'    Pause : 'm'");
}

void conf(source_t *dt)
{
    sfText_setColor(dt->option->conf_1->text, sfBlack);
    sfText_setColor(dt->option->conf_2->text, sfBlack);
    sfText_setColor(dt->option->conf_3->text, sfBlack);
    if (dt->option->conf == 1)
        conf_one(dt);
    else if (dt->option->conf == 2)
        conf_two(dt);
    else
        conf_third(dt);
}

void event_conf(source_t *dt)
{
    if (((dt->option->conf_1->pos.x - 50) <= dt->pos_ms.x) && \
    ((dt->option->conf_1->pos.x + 160) >= dt->pos_ms.x) && \
    ((dt->option->conf_1->pos.y - 50) <= dt->pos_ms.y) && \
    ((dt->option->conf_1->pos.y + 75) >= dt->pos_ms.y))
        dt->option->conf = 1;
    if (((dt->option->conf_2->pos.x - 50) <= dt->pos_ms.x) && \
    ((dt->option->conf_2->pos.x + 160) >= dt->pos_ms.x) && \
    ((dt->option->conf_2->pos.y - 50) <= dt->pos_ms.y) && \
    ((dt->option->conf_2->pos.y + 75) >= dt->pos_ms.y))
        dt->option->conf = 2;
    if (((dt->option->conf_3->pos.x - 50) <= dt->pos_ms.x) && \
    ((dt->option->conf_3->pos.x + 170) >= dt->pos_ms.x) && \
    ((dt->option->conf_3->pos.y - 50) <= dt->pos_ms.y) && \
    ((dt->option->conf_3->pos.y + 75) >= dt->pos_ms.y))
        dt->option->conf = 3;
}