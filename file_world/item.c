/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** creation_world.c
*/
#include "../include/proto.h"

void put_item_bis(source_t *dt, int line, int comp)
{
    if (dt->map[line][comp] == 's') {
        dt->wrd->shovel->pos.x = comp * 100;
        dt->wrd->shovel->pos.y = line * 100;
    }
    if (dt->map[line][comp] == 'n') {
        dt->wrd->nain->pos.x = comp * 100;
        dt->wrd->nain->pos.y = line * 100;
    }
}

void put_item(source_t *dt)
{
    int line = 0;
    int comp = 0;

    dt->wrd->shovel->pos.x = 8000;
    dt->wrd->shovel->pos.y = 0;
    dt->wrd->nain->pos.x = 8000;
    dt->wrd->nain->pos.y = 0;
    for (; dt->map[line] != NULL; line++) {
        for (comp = 0; dt->map[line][comp] != '\0'; comp++)
            put_item_bis(dt, line, comp);
    }
}

void after_find_item(source_t *dt, int p_y, int p_x, char item)
{
    dt->map[p_y][p_x] = '0';
    if (item == 'n')
        dt->wrd->inven[0] = 1;
    else if (item == 's')
        dt->wrd->inven[1] = 1;
}

void find_item(source_t *dt)
{
    int norme = 0;
    int p_x = dt->pers->pos[0];
    int p_y = dt->pers->pos[1];

    if (dt->map[p_y][p_x - 1] == 'n' || dt->map[p_y][p_x - 1] == 's')
        after_find_item(dt, p_y, p_x - 1, dt->map[p_y][p_x - 1]);
    if (dt->map[p_y][p_x + 1] == 'n' || dt->map[p_y][p_x + 1] == 's')
        after_find_item(dt, p_y, p_x + 1, dt->map[p_y][p_x + 1]);
    norme++;
    if (dt->map[p_y - 1][p_x] == 'n' || dt->map[p_y - 1][p_x] == 's')
        after_find_item(dt, p_y - 1, p_x, dt->map[p_y - 1][p_x]);
    if (dt->map[p_y + 1][p_x] == 'n' || dt->map[p_y + 1][p_x] == 's')
        after_find_item(dt, p_y + 1, p_x, dt->map[p_y + 1][p_x]);
}