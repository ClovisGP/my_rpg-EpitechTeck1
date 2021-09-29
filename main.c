/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** main.c
*/
#include "include/proto.h"

int check_arg(source_t *dt, int ac, char **av)
{
    int norme = 0;

    if (ac < 2) return (1);
    if (my_strcmpn("-h", av[1], 3) == 0 || my_strcmpn("--help", av[1], 7) \
    == 0) {
        if (display_help() == 84)
            return (84);
    }
    norme++;
    if (my_strcmpn("-no_fight", av[1], 10) == 0)
        dt->is_combat = 1;
    else
        dt->is_combat = 0;
    return (1);
}

int display_gen(source_t *dt)
{
    display_menu(dt);
    if (display_world(dt) == 84) return (84);
    display_option(dt);
    display_option_four(dt);
    display_end(dt);
    display_credit(dt);
    inv_display(dt);
    fight(dt, dt->wrd->name_mob);
    if (test_end(dt) == 84) return (84);
    return (0);
}

int general(source_t *dt)
{
    if (init(dt) == 84) return (84);
    if (create_media_menu(dt) == 84) return (84);
    sfRenderWindow_setFramerateLimit(dt->wind, 60);
    while (sfRenderWindow_isOpen(dt->wind)) {
        dt->pos_ms = sfMouse_getPositionRenderWindow(dt->wind);
        if (test_event(dt) == 84) return (84);
        if (display_gen(dt) == 84) return (84);
        sfRenderWindow_display(dt->wind);
    }
    destroy_end(dt);
    return (0);
}

int main(int ac, char **av)
{
    source_t dt;
    int ret = check_arg(&dt, ac, av);

    if (ret == 84){
        return (84);
    }else if (ret == 0){
        return (0);
    }
    if (general(&dt) == 84) return (84);
    return (0);
}