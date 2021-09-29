/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** quest.c
*/
#include "../include/proto.h"

void quest_fos(source_t *dt)
{
    if (dt->wrd->quest_rec[0] == 3) {
        sfClock_destroy(dt->wrd->dial->dial_clo);
        dt->wrd->dial->is_dia = 0;
        dt->wrd->quest_rec[0] = 2;
    } else if (dt->wrd->quest_rec[0] == 2) {
        sfText_setString(dt->wrd->dialog->text, \
        "Merci de l'avoir retrouvee\nTu as toute ma gratitude.");
        dt->wrd->quest_rec[0] = 3;
    }
    if (dt->wrd->quest_rec[0] == 0) {
        sfText_setString(dt->wrd->dialog->text, \
        "Pupuce est partie.\nS'il te plait,\naide moi, je t'en supplie.");
        dt->wrd->quest_rec[0] = 1;
    }
}

void quest_ricard(source_t *dt)
{
    if (dt->wrd->quest_rec[1] == 3) {
        sfClock_destroy(dt->wrd->dial->dial_clo);
        dt->wrd->dial->is_dia = 0;
        dt->wrd->quest_rec[1] = 2;
    } else if (dt->wrd->quest_rec[1] == 2) {
        sfText_setString(dt->wrd->dialog->text, \
        "Merci, tu l'as retrouve.\nAttention Poutine\napproche avec Sanic");
        dt->wrd->quest_rec[1] = 3;
    }
    if (dt->wrd->quest_rec[1] == 0) {
        sfText_setString(dt->wrd->dialog->text, \
        "Mon ami gnome est reste\ndans la montagne.\nVa l'aider a revenir.");
        dt->wrd->quest_rec[1] = 1;
    }
}

void quest_inco(source_t *dt)
{
    if (dt->wrd->quest_rec[2] == 3) {
        sfClock_destroy(dt->wrd->dial->dial_clo);
        dt->wrd->dial->is_dia = 0;
        dt->wrd->quest_rec[2] = 2;
    } else if (dt->wrd->quest_rec[2] == 2) {
        sfText_setString(dt->wrd->dialog->text, \
        "Ok, on est bon, c'est repare.\nOn peut enfin rentrer chez nous.");
        dt->wrd->quest_rec[2] = 3;
    }
    if (dt->wrd->quest_rec[2] == 0) {
        sfText_setString(dt->wrd->dialog->text, \
        "Je vais reparer le vaisseau,\ntoi, vas aider les gens d'ici.");
        dt->wrd->quest_rec[2] = 1;
    }
}

void what_quest(source_t *dt)
{
    int norme = 0;

    if (my_strcmpn(dt->wrd->dial->name, "Fossoyeur", 10) == 0) {
        if (dt->wrd->quest_rec[0] == 1)
            valid_quest(dt, 0);
        quest_fos(dt);
    }
    if (my_strcmpn(dt->wrd->dial->name, "Ricardo", 8) == 0) {
        if (dt->wrd->quest_rec[1] == 1)
            valid_quest(dt, 1);
        quest_ricard(dt);
    }
    norme++;
    if (my_strcmpn(dt->wrd->dial->name, "Inconnue", 9) == 0) {
        if (dt->wrd->quest_rec[2] == 1)
            valid_quest(dt, 2);
        quest_inco(dt);
    }
}