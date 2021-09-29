/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** stockage.c
*/
#include "../include/proto.h"

int who_speak_bis(char *name)
{
    int norme = 0;

    if (my_strcmpn("Louise", name, 7) == 0)
        return (14);
    else if (my_strcmpn("Faustine", name, 9) == 0)
        return (16);
    if (my_strcmpn("Aurore", name, 7) == 0)
        return (19);
    else if (my_strcmpn("Leila", name, 6) == 0)
        return (22);
    norme++;
    if (my_strcmpn("Cassandre", name, 10) == 0)
        return (24);
    else if (my_strcmpn("Sanic", name, 6) == 0)
        return (27);
    return (0);
}

int who_speak(char *name)
{
    int norme = 0;

    if (my_strcmpn("Germain", name, 8) == 0)
        return (2);
    else if (my_strcmpn("Altair", name, 7) == 0)
        return (4);
    if (my_strcmpn("Ricardo", name, 8) == 0)
        return (6);
    else if (my_strcmpn("Fossoyeur", name, 10) == 0)
        return (8);
    norme++;
    if (my_strcmpn("Amynee", name, 7) == 0)
        return (10);
    else if (my_strcmpn("Inconnue", name, 9) == 0)
        return (12);
    return (who_speak_bis(name));
}