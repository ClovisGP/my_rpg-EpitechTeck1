/*
** EPITECH PROJECT, 2019
** proto.h
** File description:
** prototype for navy
*/
#include "my.h"
#include "struct.h"
#include "get_next_line.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void item_repositionning(t_char_inv *c);
int inv_event(source_t *dt);
void inv_display(source_t *dt);
void inv_clear(source_t *dt);
void undraw_inventory(source_t *dt);
void iventory_draw(source_t *dt);
sfVector2f set_item(t_char_inv *c, int item, sfVector2f *v, sfVector2f tmp);
void item_positionnning(t_char_inv *c);
void set_vector(sfVector2f *vector, int *data);
void inventory_setposotion(t_char_inv *c);
void check_vector(t_char_inv *c);
void check_background_vector(t_char_inv *c);
void check_inventory(t_char_inv *c);
void check_item(t_char_inv *c);
bool check_vreturn(int vreturn, t_game_char *ch);
int inventory_background(t_game_char *ch, char *filepath);
bool armor_sprite_texture(t_equipement *armor, char *filepath);
bool weapon_sprite_texture(t_equipement *weapon, char *filepath);
bool item_sprite_texture(t_item *item, char *filepath);
void my_destroy(t_char_inv *c);
void free_four(t_char_inv *c);
void free_three(t_char_inv *c);
void free_two(t_char_inv *c);
void free_one(t_char_inv *c);
void free_item(t_char_inv *c);
bool init_char(t_game_char *ch, char *name);
bool stat_stick_weapon(t_game_char *ch);
bool stat_stick_armor(t_game_char *ch);
bool init_arm(t_game_item *item);
bool init_weap(t_game_item *item);
bool init_atm(t_game_item *item);
int add_node_armor(t_inventory **inv, t_equipement *armor, t_chstuff *ch);
int add_node_weapon(t_inventory **inv, t_equipement *weapon, t_chstuff *ch);
bool add_node_item(t_inventory **inv, t_item *item);
void remove_game_object(t_game_char *ch, int type, int id);
bool armor_init_desc(t_equipement *armor, char *name, char *desc, int id);
bool weapon_init_desc(t_equipement *weapon, char *name, char *desc, int id);
bool item_init_desc(t_item *item, char *name, char *desc, int id);
void armor_init_stat(t_equipement *armor, int alvl, int mana, int type);
void weapon_init_stat(t_equipement *weapon, int wlvl, int mana, int type);
void item_init_stat(t_item *item, int ilvl, int type);
bool init_inv(t_game_char *ch);
void add_item(t_game_char *ch, t_game_item *item, int type, int item_p);
bool inventory(t_char_inv *c);
void check_char_stat(t_game_char *ch);
void check_char_bstat(t_game_char *ch);

int world_event(source_t *dt);
void what_interac(source_t *dt);
int init(source_t *dt);
int open_file(source_t *dt);
int display_help(void);
int take_dialogue(source_t *dt);
int create_media_world(source_t *dt);
void deplac_right(source_t *dt);
void deplac_left(source_t *dt);
void deplac_down(source_t *dt);
void deplac_up(source_t *dt);
void destroy_world(source_t *dt);
int display_world(source_t *dt);
int choice_mouv(source_t *dt);
int create_media_menu(source_t *dt);
void destroy_menu(source_t *dt);
void display_menu(source_t *dt);
int event_menu(source_t *dt);
void destroy_end(source_t *dt);
void display_quest(source_t *dt);
int test_event(source_t *dt);
void put_item(source_t *dt);
void find_item(source_t *dt);
void mouv_hud_right(source_t *dt);
void mouv_hud_left(source_t *dt);
void mouv_hud_down(source_t *dt);
void mouv_hud_up(source_t *dt);
void what_quest(source_t *dt);
void choice_dialogue_bis(source_t *dt, int pnj_x, int pnj_y);
void valid_quest(source_t *dt, int choice);
int alloc_world(source_t *dt);
int create_sprite_world(source_t *dt);
int creation_perso(source_t *dt);
int create_media_option(source_t *dt);
void destroy_option(source_t *dt);
void display_option(source_t *dt);
int option_event(source_t *dt);
void sound_max(source_t *dt);
void sound_min(source_t *dt);
void event_conf(source_t *dt);
void conf(source_t *dt);
int save_read(source_t *dt);
int my_leng_board(char **board);
int save_write(source_t *dt);
int prepare_save(source_t *dt);
void reset_to_zero_view(source_t *dt);
void reset_to_zero_view(source_t *dt);
int option_event_four(source_t *dt);
void display_option_four(source_t *dt);
int create_music_world(source_t *dt);
int creation_media_end(source_t *dt);
void destroy_end_page(source_t *dt);
int end_event(source_t *dt);
void display_end(source_t *dt);
int test_end(source_t *dt);
int alloc_end(source_t *dt);
void traitement_save(source_t *dt);
int lauch_fight(source_t *dt);
int who_speak(char *name);
int create_text_menu(source_t *dt);
int clic_event_menu(source_t *dt);
int credit_event(source_t *dt);
void which_destroy(source_t *dt);
int create_media_credit(source_t *dt, int choice);
void destroy_credit(source_t *dt);
void display_credit(source_t *dt);
int alloc_credit(source_t *dt);
void replace_view(source_t *dt);
int fight(source_t *src, char *mob_name);
char **my_boardcpy(char **board);
int alloc_fight(source_t *dt);
int creation_media_fight(source_t *dt, int choice);
int destroy_fight(source_t *dt);
int fight_event(source_t *dt);
int alloc_inv(source_t *dt);