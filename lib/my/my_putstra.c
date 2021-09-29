/*
** EPITECH PROJECT, 2019
** myPutSTR
** File description:
** display char one by one
*/
void my_putstr(char const *str);
void my_put_nbr(int nb);
#include <unistd.h>

void my_putstr_nc(char *str, char c)
{
    my_putstr(str);
    write(1, &c, 1);
}

void my_put_nbrstr(int nb, char *str)
{
    my_put_nbr(nb);
    my_putstr(str);
    return;
}
