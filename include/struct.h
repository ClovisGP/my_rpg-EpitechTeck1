/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** struct.h
*/
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Config.h>
#include <SFML/Window.h>
#include <SFML/OpenGL.h>
#include <SFML/Audio.h>
#include <stdbool.h>
#define CHARNAME "Billy"
#define INV_PAGE 9
#define WORLD_PAGE 2

#define WEAPON 0
#define ARMOR 1
#define ITEM 2

#define NBWEAPON 3
#define NBARMOR 3
#define NBITEM 3
#define NBGAMEITEM (NBWEAPON + NBITEM + NBARMOR)
#define NBCHAR 1

#define MAGE 100
#define WARRIOR 101
#define ELF 102

#define STAFF 0
#define SWORD 100
#define BOW 200

#define PRECORVERY 25
#define PCARRYLIMIT 5
#define POTION 2
#define PPOPO 0
#define IDPOPO 20
#define HPOPO_PATH "resc/inventory/Popo14.png"
#define POPO "Health potion"
#define POPOD "Health potion that restore 25 hp\n"

#define CCARYLIMT 5
#define ANTIDOTE 1
#define PCURE 1
#define IDCURE 21
#define CURE_PATH "resc/inventory/Cure.png"
#define POPOCURE "Antidote"
#define POPOCURED "Cure dot\n"

#define BOMBE 0
#define BOMB_PATH "resc/inventory/Megumin.png"
#define BCARRYLIMIT 5
#define PBOMB 2
#define IDBOMB 22
#define MEGUMI "Bombe"
#define MEGUBOUM "Bakuretsu\n"

#define PWARMOG 0
#define IDWARMORG 10
#define WARMOG_PATH "resc/inventory/Warmorg.png"
#define WARMOG "Warmog hearts"
#define WARMOGD "Litteraly Warmog hearts\n"

#define IDGRDN 11
#define PGRDN 1
#define GUARDIAN_PATH "resc/inventory/Guardian_angel.png"
#define GRDN "Guardian Angel"
#define GRDND "Why the fuck not!\n"

#define IDZNYA 12
#define PZNYA 2
#define ZHONYA_PATH "resc/inventory/Zhonya.png"
#define ZNYA "Zhonya"
#define ZNYAD "Zhonya's\n"

#define IDSWORD 0
#define PSWORD 0
#define SWORD_PATH "resc/inventory/Sword.png"
#define TRGSW "Training SWORD"
#define TRGSWD "A basic SWORD for training purpose\n"

#define IDSTAFF 1
#define PSTAFF 1
#define STAFF_PATH "resc/inventory/Staff.png"
#define TRGST "Training STAFF"
#define TRGSTD "A basic STAFF for training purpose\n"

#define IDBOW 2
#define PBOW 2
#define BOW_PATH "resc/inventory/Bow.png"
#define TRGB "Training BOW"
#define TRGBD "A basic BOW for training purpose\n"

#define INVENTORY_PATH "resc/inventory/inventory_background.png"

typedef struct s_equipement
{
    char *name;
    char *desc;
    int atk;
    float crit;
    float crit_dmg;
    int agi;
    int spd;
    int def;
    int hp;
    short mana;
    short lvl_lmt;
    int type;
    int spldmg;
    int id;
    sfVector2f vector;
    sfSprite *sprt;
    sfTexture *txt;
} t_equipement;
typedef struct s_item
{
    char *name;
    char *desc;
    int id;
    int atk;
    int type;
    bool cure;
    int recorvery;
    int carry_limit;
    sfVector2f vector;
    sfSprite *sprt;
    sfTexture *txt;
} t_item;
typedef struct s_game_item
{
    t_equipement *weapon;
    t_equipement *armor;
    t_item *item;
} t_game_item;
typedef struct s_inventory
{
    t_equipement *weapon;
    t_equipement *armor;
    t_item *item;
    short type;
    int id;
    struct s_inventory *next;
} t_inventory;
typedef struct s_equipped_equipement
{
    bool weapon;
    bool armor;
} t_chstuff;
typedef struct s_game_char
{
    char *name;
    int xp_limit;
    int xp;
    int agi;
    int str;
    int spr;
    int hp;
    int def;
    int mana;
    int atk;
    float crit;
    float crit_dmg;
    int spd;
    int lvl;
    int spldmg;
    int batk;
    float bcrit;
    float bcrit_dmg;
    int bspd;
    int blvl;
    int bspldmg;
    int bagi;
    int bstr;
    int bspr;
    int bhp;
    int bdef;
    int bmana;
    char *last_item_added;
    sfVector2f binv_vector;
    sfSprite *inv_spr;
    sfTexture *inv_tx;
    t_chstuff *stuff;
    t_inventory *inv;
} t_game_char;
typedef struct s_chachama_part
{
    t_game_item *item;
    t_game_char *ch;
} t_char_inv;
typedef struct inv inv_t;
struct fight{
    int hero_pv;
    int hero_pm;
    int mob_pv;
    sfSprite *hero;
    sfSprite *mob;
    sfSprite *batlfld_spr;
    sfSprite *antid_spr;
    sfSprite *hltpo_spr;
    sfSprite *bomb_spr;
    sfText *pv;
    sfText *pm;
    sfText *attaques;
    int nb_hero_atk;
    sfVector2f battle_pos;
};
typedef struct fight fight_t;
struct hero_inf{
    char *attack1;
    char *attack2;
    char *attack3;
    char *attack4;
    char *attack5;
    char *defence;
    int pv_max;
    int pm_max;
    int pv_perlvl;
    int pm_perlvl;
    int xp_perlvl;
    int xp_factor;
};
typedef struct hero_inf hero_t;
struct mob_inf{
    int lvl;
    int health_per_lvl;
    int fpm;
    int *sheet_size;
    int *frame_size;
    char *weapon;
    char *type;
    char *name;
    char *attack1;
    char *attack2;
    char *attack3;
    char *attack4;
    char *sprite_file;
};
typedef struct mob_inf mob_t;
struct amau {
    struct fight *ft;
    struct mob *mob;
    struct hero_inf *her;
    int battle_pos[2];
    int result;
    sfSprite *escape_spr;
    sfMusic *ost;
};
typedef struct amau amau_t;
struct item {
    int id;
    char *name;
    struct sprite *img;
};
typedef struct item item_t;
struct view {
    sfView *view;
    sfFloatRect r_view;
    sfVector2f po_view;
    sfVector2f save_pos;
};
typedef struct view view_t;
struct sprite {
    sfTexture *tex;
    sfSprite *spr;
    sfVector2f pos;
    sfIntRect rect;
};
typedef struct sprite sprite_t;
struct text {
    sfText *text;
    sfVector2f pos;
};
typedef struct text text_t;
struct dialogue {
    int line;
    char *name;
    int is_dia;
    char **dial_text;
    sfClock *dial_clo;
    sfTime dial_tim;
    float dial_unit;
};
typedef struct dialogue dial_t;
struct world {
    struct sprite *bg;
    struct text *dialog;
    struct sprite *hud_dial;
    struct text *pv;
    struct text *level;
    struct sprite *hud_quest;
    int quest_flag;
    int quest_rec[3];
    struct view *vi;
    struct dialogue *dial;
    struct sprite *shovel;
    struct sprite *nain;
    struct sprite *hud_inv;
    struct sprite *save;
    int flag_save;
    int inven[2];
    int inv_flag;
    int percen_fight;
    int is_boss;
    int nbr_mob;
    char *name_mob;
    sfMusic *ost;
};
typedef struct world world_t;
struct option {
    struct sprite *bg;
    struct text *sound;
    sfMusic *ost;
    int conf;
    struct text *conf_1;
    struct text *conf_2;
    struct text *conf_3;
    struct text *conf_explain;
};
typedef struct option option_t;
struct menu {
    struct sprite *bg;
    struct text *play;
    struct text *play_fem;
    struct text *conti;
    struct text *exit;
    struct text *option;
    struct text *explain;
    struct text *credit;
    sfMusic *ost;
};
typedef struct menu menu_t;
struct credit {
    struct sprite *bg;
    sfMusic *ost;
};
typedef struct credit credit_t;
struct end {
    struct sprite *bg;
    struct text *retour;
    sfMusic *ost;
};
typedef struct end end_t;
struct perso {
    struct sprite *img;
    int pos[2];
    int mouv;
    int end_depl;
    sfClock *clo_depl;
    sfTime time_depl;
    float unit_depl;
    struct item *obj;
    int level;
    int pv;
    int is_man;
};
typedef struct perso perso_t;
struct source {
    sfRenderWindow *wind;
    sfEvent event;
    sfVector2i pos_ms;
    struct world *wrd;
    struct menu *menu;
    struct option *option;
    struct end *end;
    struct credit *credit;
    struct amau *amau;
    t_char_inv c;
    int page;
    char **map;
    char **map_vierge;
    int sound_level;
    sfFont *princ;
    struct perso *pers;
    int up;
    int down;
    int left;
    int right;
    int inter;
    int inven;
    int quest;
    int save;
    int quit;
    int pause;
    int is_combat;
    int inv;
};
typedef struct source source_t;