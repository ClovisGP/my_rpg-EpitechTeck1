/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** check_vreturn.c
*/
#include "../../../../include/proto.h"

bool check_vvreturn(int vreturn)
{
    switch (vreturn){
    case 3:
        my_putstr_er("Only one armor can be equipped\n");
        return (0);
    case 4:
        my_putstr_er("Only one weapon can be equipped\n");
        return (0);
    case 5:
        my_putstr_er("Sprite_create error\n");
        break;
    case 6:
        my_putstr_er("Sprite texture error\n");
        break;
    }
    return (1);
}

bool check_vreturn(int vreturn, t_game_char *ch)
{
    switch (vreturn){
    case 0:
        my_putstr_er("Malloc went wrong\n");
        break;
    case 1:
        my_putstr("Everything went fine item added to inventory: ");
        my_printf("%s\n", ch->last_item_added);
        break;
    case 7:
        my_putstr("Background_inventory sucessfully intialized\n");
        break;
    case 8:
        my_putstr("Armor stat correctly added\n");
        break;
    case 9:
        my_putstr("Weapon stat correctly added\n");
        break;
    }
    return (check_vvreturn(vreturn));
}
