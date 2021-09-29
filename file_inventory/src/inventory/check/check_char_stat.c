/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** chack_char_stat.c
*/
#include "../../../../include/proto.h"

void check_char_stat(t_game_char *ch)
{
    my_putstr("\nchar stat\n");
    my_putstr_nc(ch->name, '\n');
    my_printf("agi:%d\t\tatk:%d\t\ttcc:%f\n", ch->agi, ch->atk, ch->crit);
    my_printf("dcc:%f\tdef:%d\t\thp:%d\n", ch->crit_dmg, ch->def, ch->hp);
    my_printf("lvl:%d\t\tmana%d\t\tspd:%d\n", ch->lvl, ch->mana, ch->spd);
    my_printf("spldmg:%d\tspr:%d\t\tstr%d\n", ch->spldmg, ch->spr, ch->str);
    my_printf("xp:%d xplimit:%d\n", ch->xp, ch->xp_limit);
}

void check_char_bstat(t_game_char *ch)
{
    my_putstr("\nchar base stat\n");
    my_putstr_nc(ch->name, '\n');
    my_printf("agi:%d\t\tatk:%d\t\ttcc:%f\n", ch->bagi, ch->batk, ch->bcrit);
    my_printf("dcc:%f\tdef:%d\t\thp:%d\n", ch->crit_dmg, ch->def, ch->bhp);
    my_printf("lvl:%d\t\tmana:%d\t\tspd:%d\n", ch->blvl, ch->bmana, ch->bspd);
    my_printf("spldmg:%d\tspr:%d\t\tstr%d\n", ch->bspldmg, ch->bspr, ch->bstr);
}