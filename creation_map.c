/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** creation_map.c
*/
#include "include/proto.h"

int open_file(source_t *dt)
{
    int line;
    int fd = open("file_txt/map.txt", O_RDONLY);

    if (fd < 3) {
        write(2, "Error: map.txt can't be openned\n", 32);
        return (84);
    }
    dt->map_vierge = malloc(sizeof(char *) * 21);
    if (!dt->map_vierge) return (84);
    for (line = 0; line < 20; line++)
        dt->map_vierge[line] = get_next_line(fd);
    dt->map_vierge[line] = NULL;
    return (0);
}