/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** csfml_text_functions.c
*/
#include "fight.h"

sfText *load_text(char *string, char *font_path)
{
    sfFont *font;
    sfText *text;

    font = sfFont_createFromFile(font_path);
    text = sfText_create();
    sfText_setString(text, string);
    sfText_setFont(text, font);
    return (text);
}

void text_setpos(sfText *text, int pos_x, int pos_y)
{
    sfVector2f pos;

    pos.x = pos_x;
    pos.y = pos_y;
    sfText_setPosition(text, pos);
}

void text_setscale(sfText *text, float height, float width)
{
    sfVector2f scale;

    scale.x = width;
    scale.y = height;
    sfText_setScale(text, scale);
}