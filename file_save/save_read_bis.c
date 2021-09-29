/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** save_read_bis.c
*/
#include "../include/proto.h"

int save_read_encore(source_t *dt, FILE *file, char **tmp_bis)
{
    if (my_strcmpn(tmp_bis[0], "is_boss", 7) == 0) {
        if (my_leng_board(tmp_bis) == 2)
            dt->wrd->is_boss = my_getnbr(tmp_bis[1]);
    }
    return (0);
}

int man_or_woman(source_t *dt)
{
    sfSprite_destroy(dt->pers->img->spr);
    sfTexture_destroy(dt->pers->img->tex);
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

void traitement_save_bis(source_t *dt, int line, int comp)
{
    if (dt->map[line][comp] == 's') {
        if (dt->wrd->quest_rec[0] == 2 || dt->wrd->quest_rec[0] == 3 || \
        dt->wrd->inven[1] == 1)
            dt->map[line][comp] = '0';
    }
    if (dt->map[line][comp] == 'n') {
        if (dt->wrd->quest_rec[1] == 2 || dt->wrd->quest_rec[1] == 3 || \
        dt->wrd->inven[0] == 1)
            dt->map[line][comp] = '0';
    }
}

void traitement_save(source_t *dt)
{
    int line = 0;
    int comp = 0;

    for (; dt->map[line] != NULL; line++) {
        for (comp = 0; dt->map[line][comp] != '\0'; comp++)
            traitement_save_bis(dt, line, comp);
    }
}

int prepare_save(source_t *dt)
{
    destroy_menu(dt);
    if (create_media_world(dt) == 84) return (84);
    dt->page = 2;
    if (save_read(dt) == 84) {
        destroy_world(dt);
        if (create_media_menu(dt) == 84) return (84);
        sfText_setString(dt->menu->conti->text, "No save\n");
        dt->page = 1;
    }
    traitement_save(dt);
    put_item(dt);
    if (man_or_woman(dt) == 84) return (84);
    return (0);
}