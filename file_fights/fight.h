/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** fight.c
*/
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>
#include "../include/proto.h"
int my_getnbr(char *nbr);
int myy_strlen(char *str);
int load_ress(source_t *dt);
char *int_to_char(int nbr_base);
sfText *load_text(char *string, char *font_path);
void text_setpos(sfText *text, int pos_x, int pos_y);
int my_strcmp(char *str1, char *str2);
sfSprite *load_sprite(char *image_path);
char **strn_to_word_array(char *str, char limiter);
void sprite_setpos(sfSprite *sprite, int x, int y);
void sprite_setscale(sfSprite *sprite, int x, int y);
void text_setpos(sfText *text, int pos_x, int pos_y);
char *open_n_read(char *file_name);
void text_setscale(sfText *text, float height, float width);