/*
** EPITECH PROJECT, 2019
** my_splite.c
** File description:
** splite a str to a char **
*/
#include <unistd.h>
#include <stdlib.h>
char *my_strcpy(char *src);
char **my_splite_bis(char *str, int nb_cat, char car, char **ret);

char **my_splite(char car, char *str)
{
    char **ret;
    int comp;
    int nb_cat = 1;

    for (comp = 0; str[comp] != '\0'; comp++)
        nb_cat = (str[comp] == car) ? nb_cat + 1 : nb_cat;
    if (nb_cat == 1) {
        ret = malloc(sizeof(char *) * 2);
        ret[0] = my_strcpy(str);
        ret[1] = NULL;
        return (ret);
    } else {
        ret = malloc(sizeof(char *) * (nb_cat + 1));
        ret = my_splite_bis(str, nb_cat, car, ret);
        ret[nb_cat] = NULL;
        return (ret);
    }
}

char **my_splite_bis(char *str, int nb_cat, char car, char **ret)
{
    int comp;
    int c_se;
    int comp_str = 0;
    int save = 0;
    int save_bis = 0;

    for (comp = 0; nb_cat > 0; comp++) {
        for (c_se = save; str[c_se] != car && str[c_se] != '\0'; c_se++);
        save_bis = c_se - save;
        save = c_se + 1;
        ret[comp] = malloc(sizeof(char) * (save_bis + 1));
        for (c_se = 0; c_se < save_bis; c_se++) {
            ret[comp][c_se] = str[comp_str];
            comp_str = comp_str + 1;
        }
        ret[comp][c_se] = '\0';
        comp_str = comp_str + 1;
        nb_cat = nb_cat - 1;
    }
    return (ret);
}